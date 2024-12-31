#include <iostream>
#include <string>
#include "menu.h"
#include "addtask.h"
using namespace std;
using namespace ToDoList;
namespace ToDoList{
    void addtask::execute(std::vector<std::string>& tasks){
        std::cin.ignore(); // Clear the input buffer
        std::string task; //  Declare a string variable to store the user's task input
        // Prompt the user to enter a task
        std::cout << "Enter the task: ";
        // Read the entire line of input from the user and store it in the 'task' variable
        std::getline(std::cin, task);
        //  Add the task to the vector of tasks
        tasks.push_back(task);
        std::cout << "Task added successfully!\n";
    }
}