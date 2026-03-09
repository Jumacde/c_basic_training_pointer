#include "check_functions.h"

#include <stdio.h>

void check_point(int b, int c, int *p) {
    p = &b; // address of a is in p.
    printf("case1 p = &b: %p\n", (void*)p);
    *p = 300;
    printf("case2 *p = 300: %d\n", *p);
    p = &c;
    printf("case 3 p = &c: %p\n", (void*)p);
    *p = 400;
    printf("case 4 *p = 400: %d\n", *p);
    printf("b = %d, c = %d, *p = %d\n", b, c, *p);
}