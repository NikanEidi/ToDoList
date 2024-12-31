#ifndef MENU_H
#define MENU_H
#include <vector>
#include <string>
namespace ToDoList{
    //initialized class menu
    class Menu{
    public:
    //use virtual keyword to abstract class
    virtual void execute(std::vector<std::string>& tasks) = 0; // Pure virtual function
    virtual ~Menu() = default; // Virtual destructor
    };
    void displayMenu();
     
} // namespace TodoList
#endif // MENU_H
