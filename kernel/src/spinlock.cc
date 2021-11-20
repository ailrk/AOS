#include "../include/kernel/spinlock.hpp"
#include "../include/kernel/memlayout.hpp"
#include "../include/kernel/process.hpp"

SpinLock::SpinLock(char *name)
    : name(name)
    , locked(false)
    , cpu(nullptr) {}

SpinLock::SpinLock()
    : SpinLock::SpinLock(nullptr) {}

SpinLock::~SpinLock() {
    locked = true;
    cpu = nullptr;
}

void SpinLock::acquire() {
    withcli([this]() {
        if (is_holding()) {
        } else {
        }
    });
}

void SpinLock::release() {}

void SpinLock::get_caller_pcs(void *v, uint32_t pcs[]) {}

void SpinLock::pushcli() {}

void SpinLock::popcli() {}

void SpinLock::withcli(auto cb) {}