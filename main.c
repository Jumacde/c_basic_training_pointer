#include "check_functions.h"
#include <stdio.h>

int main(int argc, char** argv) {
    # if 0
    int  x = 100;
    int x1 = 201;
    double y = 100.1;
    float z = 100.1f;
    char a = 'a';
    printf("--- int x ---\n");
    check_address(x, x1, y, z, a);
    printf("addr x : %p\n", (void*)&x);
    printf("addr x1: %p\n", (void*)&x1);
    printf("addr y : %p\n", (void*)&y);
    printf("addr z : %p\n", (void*)&z);
    printf("addr a : %p\n", (void*)&a);

    int b = 100;
    int c = 200;
    int *p = NULL;
    check_point(b, c, p);
    # endif

    task1();
    task2();
    task3();
    task4();

    return 0;
}