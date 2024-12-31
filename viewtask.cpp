#include "viewtask.h"

namespace ToDoList {
    void ViewTask::execute(std::vector<std::string>& tasks) {
        if (tasks.empty()) {
            std::cout<<std::endl;
            std::cout << "Your to-do list is empty.\n";
        } else {
            std::cout << "\n--- To-Do List ---\n";
            for (size_t i = 0; i < tasks.size(); ++i) {
                std::cout << i + 1 << ". " << tasks[i] << "\n";
            }
        }
    }
}