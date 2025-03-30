/**
 * This will be the main entry of the application which will
 * contain the logic of interacting with the Task Manager class.
 * This is were the user inputs/outputs will be handled.
 * The following logic will be handled:
 * -Menu
 * -Addition, Removal and Viewing of tasks
 * -loop to handle user input
 */
#include <iostream>
#include "../include/TaskManager.h" //if header files belong to different directories then include the path
#include "../include/utils.h"

int main(){

    Utility utilities;

    //Testing TaskManager
    TaskManager taskManager;
    int option;
    std::string taskName;
    int index;

    do{
        utilities.clearScreen();//clears the screen of the previous contents to display the menu 
        std::cout << "TO DO LIST MANAGER \n"
                  << "1. Add Task\n"
                  << "2. View Tasks\n"
                  << "3. Mark a Task Complete\n "
                  << "4. Remove a Task\n"
                  << "5. Exit\n";
        std::cout << "Enter option: ";

        std::cin >> option;
        std::cin.ignore(); //ignores any leftover newline characters in the stream
        utilities.clearScreen(); // clear the screen after selecting an option

        switch (option){
            case 1:
                std::cout << "Enter task name: ";
                std::getline(std::cin, taskName);//takes user input including spaces and newline characters
                taskManager.addTask(taskName);
                break;

            case 2:
                taskManager.displayTasks();//displays the current list of tasks
                break;

            case 3:
                std::cout << "Enter task index to mark complete: ";
                std::cin >> index;
                try{
                    taskManager.markTaskComplete(index);

                } catch(const std::out_of_range& e){
                    std::cerr << e.what() << std::endl;
                }
                break;

            case 4:
                std::cout << "Enter task index to mark complete: ";
                std::cin >> index;
                try{
                    std::cout << "Removed task was: " + taskManager.removeTask(index) << std::endl;

                } catch(const std::out_of_range& e){
                    std::cerr << e.what() << std::endl;
                }
                break;

            case 5:
                std::cout << "Exiting the program...\n";
                break;
            default:
                std::cerr << "INVALID INPUT! TRY AGAIN. \n";
        }
    } while(option != 5);

    return 0;
}