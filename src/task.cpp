#include "task.h"

Task::Task(TaskFunction func, int priority) 
    : taskFunction(func), priority(priority) {}

Task::~Task() {
    if (taskThread.joinable()) {
        taskThread.join();
    }
}

void Task::start() {
    taskThread = std::thread(taskFunction);
}

void Task::join() {
    if (taskThread.joinable()) {
        taskThread.join();
    }
}

int Task::getPriority() const {
    return priority;
}