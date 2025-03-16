#include "scheduler.h"
#include <iostream>

void Scheduler::addTask(Task* task) {
    taskQueue.push(task);
}

void Scheduler::run() {
    while (!taskQueue.empty()) {
        Task* task = taskQueue.front();
        taskQueue.pop();
        task->start();
        task->join();
    }
}