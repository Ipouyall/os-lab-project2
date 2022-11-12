//
// Created by ata on 12/11/22.
//
#include "types.h"
#include "fcntl.h"
#include "user.h"
#include "syscall.h"

// simple program to test get_callers() system call
int main(int argc, char *argv[]) {
    printf(1, "testing get_callers system call\n");
    int sys_fork = SYS_fork;
    printf(1, "calling get_callers for SYS_fork\n", sys_fork);
    get_callers(sys_fork);

    int sys_wait = SYS_wait;
    printf(1, "calling get_callers SYS_wait\n", sys_wait);
    get_callers(sys_wait);

    int sys_write = SYS_write;
    printf(1, "calling get_callers SYS_write\n", sys_write);
    get_callers(sys_write);

    exit();
}