#include "check_address.h"

#include <stdio.h>

int main(int argc, char** argv) {
    int  x = 100;
    int x1 = 201;
    double y = 100.1;
    float z = 100.1f;
    char a = 'a';
    printf("--- int x ---\n");
    int add_x = check_add_int(x);
    printf("addr: %p\n", (void*)&x);

    printf("--- int x1 ---\n");
    int add_x1 = check_add_int1(x1);
    printf("addr: %p\n", (void*)&x1);

    printf("--- double y ---\n");
    double add_y = check_add_doube(y);
    printf("addr: %p\n", (void*)&y);

    printf("--- float z ---\n");
    float add_z = check_add_float(z);
    printf("addr: %p\n", (void*)&z);

    printf("--- char a ---\n");
    char add_a = check_add_char(a);
    printf("addr: %p\n", (void*)&a);

    return 0;
}