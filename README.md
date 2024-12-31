
# To-Do List Application

This is a simple **console-based To-Do List application** written in C++ that allows users to manage their tasks efficiently. The application supports the following features:

## Features
- **Add Tasks**: Add new tasks to the to-do list.
- **View Tasks**: Display all the tasks in the list.
- **Remove Tasks**: Remove a specific task from the list.
- **Save and Load Tasks**: Automatically saves tasks to a file (`tasks.txt`) and loads them on startup.

## Requirements
- A C++ compiler that supports **C++11** or higher (e.g., GCC, Clang, or MSVC).
- Basic knowledge of running console applications.

## How to Compile
1. Ensure you have a compatible C++ compiler installed.
2. Open a terminal or command prompt and navigate to the project directory.
3. Use the following command to compile the project with C++11:

   ```bash
   g++ -std=c++11 main.cpp menu.cpp addtask.cpp viewtask.cpp removetask.cpp -o ToDoList
   ```

## How to Run
1. After compilation, run the program with:
   ```bash
   ./ToDoList
   ```

2. The program will automatically load tasks from `tasks.txt` if it exists.

3. Use the menu to add, view, and remove tasks. Your changes will be saved when you exit the program.

## File Descriptions
- **main.cpp**: The entry point of the program that manages the overall flow.
- **menu.h/menu.cpp**: Contains the menu functionality.
- **addtask.h/addtask.cpp**: Manages adding tasks.
- **viewtask.h/viewtask.cpp**: Handles displaying tasks.
- **removetask.h/removetask.cpp**: Implements removing tasks functionality.
- **tasks.txt**: The file used for saving and loading tasks persistently.

## Example Usage
1. Start the program:
   ```
   ./ToDoList
   ```

2. Add a new task:
   ```
   Enter your choice: 1
   Enter the task: Complete C++ project
   Task added successfully!
   ```

3. View all tasks:
   ```
   Enter your choice: 2
   --- To-Do List ---
   1. Complete C++ project
   ```

4. Remove a task:
   ```
   Enter your choice: 3
   Enter the task number to remove: 1
   Task removed successfully!
   ```

5. Exit and save tasks:
   ```
   Enter your choice: 4
   Tasks saved successfully.
   Exiting the program. Goodbye!
   ```

## License
This project is licensed under the MIT License. Feel free to use, modify, and distribute it.


