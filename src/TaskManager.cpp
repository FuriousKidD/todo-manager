#include "..\include\TaskManager.h"
#include <iostream>
#include <stdexcept>

/**
 * @brief Creates a new task according to the given title and 
 * adds it to the task vector
 * @param title name of the task
 */
void TaskManager::addTask(const std::string& title){
    Task newTask(title);// creates a new task
    tasks.push_back(newTask);// adds the newly created task to the list of tasks
}

/**
 * @brief displays the current list of tasks
 * 
 */
void TaskManager::displayTasks(){
    if(tasks.empty()){
        std::cout << "Task list is empty right now";
    }
    for(int i = 0; i < tasks.size(); i++){
        tasks[i].displayTask();
        std::cout << std::endl; 
    }
}