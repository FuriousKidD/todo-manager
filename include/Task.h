#ifndef TASK_H
#define TASK_H

#include <iostream>
#include <string>

/**
 * @class Task
 * @brief This class is a representation of a single task
 * in the to-do manager
 */
class Task{
    //private attributes and functions
    private:
        std::string title; ///< This is the title of the task
        bool completed; ///< This is the status of whether a task is marked done or not

    //public attributes and functions
    public:
        /**
         * @brief parameterized constructor
         * @param taskTitle The title(name) of the task
         */
        Task(const std::string& taskTitle);

        /**
         * @brief This functions marks a task as completed.
         */
        void markComplete();

        /**
         * @brief This retrieves and returns the title of the task
         * @return The task title as a string
         */
        std::string getTitle() const;

        /**
         * @brief Checks if a title is completed or not
         * @return True if completed, false otherwise
         */
        bool isCompleted() const;

        /**
         * @brief Displays the contents of the task
         */
        void displayTask() const;

};

#endif // TASK_H