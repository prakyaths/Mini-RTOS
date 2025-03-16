#ifndef TASK_H
#define TASK_H

#include <functional>
#include <thread>
#include <atomic>

class Task {
public:
    using TaskFunction = std::function<void()>;

    Task(TaskFunction func, int priority);
    ~Task();

    void start();
    void join();
    
    int getPriority() const;

private:
    TaskFunction taskFunction;
    std::thread taskThread;
    int priority;
};

#endif // TASK_H