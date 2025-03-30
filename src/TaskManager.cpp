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

/**
 * @brief Marks a specific task from the list of tasks, complete, given an index
 * @param index the position of the task in the list
 */
void TaskManager::markTaskComplete(int index){
    
    //error handling
    indexOutOfBounds(index);
    tasks[index].markComplete();
}

/**
 * @brief Removes a task from the list
 * @param index
 * @return the removed task
 */
Task TaskManager::removeTask(int index){
    indexOutOfBounds(index);
    Task removed = tasks[index];
    tasks.erase(tasks.begin() + index);
}

/**
 * @brief Gets the total number of existing tasks
 * @return total number of tasks
 */
int TaskManager::getTaskCount() const{
    return tasks.size();
}


