/**
 * This is where the TaskManager class will be declared.
 * Class definitions, data members and function prototypes will be included here.
 * The corresponding .cpp file will contain the definitions
 * This class will handle the following:
 * -list of tasks
 * -functions
 */
#ifndef TASKMANAGER_H
#define TASKMANAGER_H
#include <vector>
#include <Task.h>

/**
 * @class TaskManager
 * @brief This class will be used as an object for managing multiple tasks
 * by keeping track of each task's progress and has functions for adding, removing 
 * and updating tasks
 */
class TaskManager{
    private:
        std::vector<Task> tasks; ///< This will be a list of tasks
        /**
         * @brief Helper function for checking if index is within range
         * @throws out_of_bounds exception
         */
        void indexOutOfBounds(int index){
            if(index < 0 || index > tasks.size() - 1){
                throw std::out_of_range("index is out of bounds!");
            }
        }

    public:
        /**
         * @brief this function adds a new task to the container of classes. 
         * It appends a task at the back of the container
         * @param taskTitle takes the name of the task to be completed
         */
        void addTask(const std::string& taskTitle);

        /**
         * @brief Displays the list of tasks
         */
        void displayTasks();

        /**
         * @brief Marks a task as completed based on its index
         * @param index takes the index of the task to be marked as complete
         */
        void markTaskComplete(int index);

        /**
         * @brief Removes a task from the list at some position
         * @param index
         * @return reomoved task
         */
        Task removeTask(int index);

        /**
         * @brief Gets the number of tasks that are in the list
         * @return number of lists
         */
        int getTaskCount() const;


};

#endif //TASKMANAGER_H