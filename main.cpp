#include "menu.h"
#include "addtask.h"
#include "viewtask.h"
#include "removetask.h"
#include <iostream>
#include <memory>
#include <vector>
#include <fstream> // For file I/O
using namespace std;

void saveTasks(const std::vector<std::string>& tasks, const std::string& filename) {
    std::ofstream outFile(filename);
    if (!outFile) {
        std::cerr << "Error: Could not open file for saving tasks.\n";
        return;
    }
    for (const auto& task : tasks) {
        outFile << task << '\n'; // Write each task on a new line
    }
    outFile.close();
    std::cout << "Tasks saved successfully.\n";
}

void loadTasks(std::vector<std::string>& tasks, const std::string& filename) {
    std::ifstream inFile(filename);
    if (!inFile) {
        std::cerr << "Warning: Could not open file for loading tasks. Starting with an empty task list.\n";
        return;
    }
    std::string task;
    while (std::getline(inFile, task)) {
        tasks.push_back(task); // Read each line as a task
    }
    inFile.close();
    std::cout << "Tasks loaded successfully.\n";
}

int main() {
    const std::string filename = "tasks.txt"; // File to save/load tasks
    std::vector<std::string> tasks; // Task storage
    int choice;

    // Load tasks from the file
    loadTasks(tasks, filename);

    // Explicitly create unique_ptr instances using `new`
    std::unique_ptr<ToDoList::Menu> addTask(new ToDoList::addtask());
    std::unique_ptr<ToDoList::Menu> viewTask(new ToDoList::ViewTask());
    std::unique_ptr<ToDoList::Menu> removeTask(new ToDoList::RemoveTask());

    do {
        ToDoList::displayMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            addTask->execute(tasks);
            break;
        case 2:
            viewTask->execute(tasks);
            break;
        case 3:
            removeTask->execute(tasks);
            break;
        case 4:
            saveTasks(tasks, filename); // Save tasks before exiting
            std::cout << "Exiting the program. Goodbye!\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}