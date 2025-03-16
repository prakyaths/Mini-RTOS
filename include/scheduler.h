#ifndef SCHEDULER_H
#define SCHEDULER_H

#include "task.h"
#include <vector>
#include <queue>

class Scheduler {
public:
    void addTask(Task* task);
    void run();

private:
    std::queue<Task*> taskQueue;
};

#endif // SCHEDULER_H
