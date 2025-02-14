#include "ThreadPool.hpp"


void ThreadPool::Start() {
}

void ThreadPool::QueueJob(const std::function<void()>& job) {
}

void ThreadPool::Stop() {
}

bool ThreadPool::Busy() {
    return false;
}

void ThreadPool::ThreadLoop() {
}
