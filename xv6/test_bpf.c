//
// Created by pouya on 11/11/22.
//
#include "types.h"
#include "fcntl.h"
#include "user.h"

// simple program to test bpf() system call
int main(int argc, char *argv[]) {
    write(1, "we use bpf() instead of find_biggest_prime_factor() \n    for brevity and easier writing.\n", 89);
    if (argc != 2) {
        printf(2, "Error in calling; please call like:\n test_bpf <number>\n");
        exit();
    }
    int n = atoi(argv[1]);
    printf(1, "calling bpf(%d)...\n", n);
    int result = bpf(n);
    printf(1, "bpf(%d) = %d\n", n, result);
    exit();
}
