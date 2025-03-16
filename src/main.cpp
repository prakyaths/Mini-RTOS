#include "scheduler.h"
#include <iostream>

void task1() {
    std::cout << "Task 1 is running" << std::endl;
}

void task2() {
    std::cout << "Task 2 is running" << std::endl;
}

int main() {
    Scheduler scheduler;
    Task t1(task1, 1);
    Task t2(task2, 1);

    scheduler.addTask(&t1);
    scheduler.addTask(&t2);

    scheduler.run();
    return 0;
}
