//
// Created by ata on 12/11/22.
//
#include "types.h"
#include "fcntl.h"
#include "user.h"

// simple program to test get_callers() system call
int main(int argc, char *argv[]) {
    printf(1, "testing get_callers system call...\n", 49);
    if (argc != 2) {
        printf(2, "Error in syntax; please call like:\n>> test_bpf <number>\n");
        exit();
    }
    int n = atoi(argv[1]), prev_ebx;
    asm volatile(
            "movl %%ebx, %0;"
            "movl %1, %%ebx;"
            : "=r" (prev_ebx)
            : "r"(n)
            );
    printf(1, "calling get_callers(%d)...\n", n);
    get_callers();
    exit();
}