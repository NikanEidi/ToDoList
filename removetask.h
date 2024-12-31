#ifndef REMOVETASK_H
#define REMOVETASK_H

#include <vector>
#include <string>
#include "menu.h"

namespace ToDoList {
    class RemoveTask : public Menu {
    public:
        void execute(std::vector<std::string>& tasks) override;
    };
}

#endif // REMOVETASK_H