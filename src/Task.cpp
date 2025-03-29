#include "../include/Task.h"

/**
 * @brief Constructor definitionn for initializing a task
 * @param taskTitle The title of the task
 */
Task::Task(const std::string& taskTitle) : title(taskTitle), completed(false){}

/**
 * @brief Mark the current task as completed
 */
void Task::markComplete(){
    completed = true;
}

/**
 * @brief Gets the title of the current task
 * @return title of the task
 */
std::string Task::getTitle() const{
    return title;
}

/**
 * @brief checks if the current task is completed or not
 * @return true if completed, false otherwise
 */
bool Task::isCompleted() const{
    return completed;
}

/**
 * @brief displays the name of the task and whether or not it is completed or not
 */
void Task::displayTask() const{
    std::cout << title << ": " << "[ " << (isCompleted() ? "✅" : "❌") << " ]"
              << std::endl;
}