#include "removetask.h"
#include <iostream>
#include <limits> // For std::numeric_limits

namespace ToDoList {

    void RemoveTask::execute(std::vector<std::string>& tasks) {
        if (tasks.empty()) {
            std::cout<<std::endl;
            std::cout << "Your to-do list is empty. Nothing to remove.\n";
            return; // Exit early if no tasks are available
        }

        int taskNumber;
        std::cout << "Enter the task number to remove: ";
        std::cin >> taskNumber;

        if (std::cin.fail()) {
            // Handle invalid input (non-integer values)
            std::cin.clear(); // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Invalid input. Please enter a valid number.\n";
            return;
        }

        if (taskNumber < 1 || taskNumber > static_cast<int>(tasks.size())) {
            // Check if the input is within the valid range
            std::cout << "Invalid task number. Please try again.\n";
        } else {
            // Remove the specified task
            tasks.erase(tasks.begin() + taskNumber - 1);
            std::cout << "Task removed successfully!\n";
        }
    }

} // namespace ToDoList