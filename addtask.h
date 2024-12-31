#ifndef ADDTASK_H
#define ADDTASK_H
#include "menu.h"
#include <iostream>
#include <string>
namespace ToDoList{
    class addtask : public Menu{
    public:
        void execute(std::vector<std::string>& tasks) override;
        virtual ~addtask() = default; // Virtual destructor
    };
    
} // namespace 

#endif //ADDTASK_H