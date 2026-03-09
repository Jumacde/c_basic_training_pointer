#include "check_functions.h"

#include <stdio.h>

void check_point(int b, int c, int *p) {
    p = &b; // address of a is in p.
    printf("case1 p = &b: %p\n", (void*)p);
    printf("int *p is %d(%dbyte) and %d's address is 0x%x\n", *p, sizeof(int),*p, &*p);
    printf("int b is %d(%dbyte) and %d's address is 0x%x\n", b, sizeof(int), b, &b);
    *p = 300;
    printf("case2 *p = 300: %d\n", *p);
    printf("int *p is %d(%dbyte) and %d's address is 0x%x\n", *p, sizeof(int), *p, &*p);
    p = &c;
    printf("case 3 p = &c: %p\n", (void*)p);
    printf("int &c is %d(%dbyte) and %d's address is 0x%x\n", c, sizeof(int), c, &c);
    printf("int *p is %d(%dbyte) and %d's address is 0x%x\n", *p, sizeof(int), *p, &*p);
    *p = 400;
    printf("case 4 *p = 400: %d\n", *p);
    printf("int *p is %d(%dbyte) and %d's address is 0x%x\n", *p, sizeof(int), *p, &*p);
    printf("b = %d, c = %d, *p = %d\n", b, c, *p);
}