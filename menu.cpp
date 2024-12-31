#include <iostream>
#include <vector>
#include <string>
#include "menu.h"
using namespace std;
using namespace ToDoList;
namespace ToDoList{
    void displayMenu(){
        std::cout << "\n--- To-Do List Menu ---\n";
        std::cout << "1. Add a task\n";
        std::cout << "2. View all tasks\n";
        std::cout << "3. Remove a task\n";
        std::cout << "4. Exit\n";
    }
}
