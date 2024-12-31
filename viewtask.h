#ifndef VIEWTASK_H
#define VIEWTASK_H

#include "menu.h"
#include <iostream>

namespace ToDoList {
    class ViewTask : public Menu {
    public:
        void execute(std::vector<std::string>& tasks) override; // Override execute function
    };
}

#endif // VIEWTASK_H