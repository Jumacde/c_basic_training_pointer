#include "check_functions.h"

#include <stdio.h>

void check_point(int b, int c, int *p) {
    p = &b; // address of a is in p.
    printf("%p\n", (void*)p);
    *p = 300;
    printf("%d\n", *p);
    p = &c;
    printf("%p\n", (void*)p);
    *p = 400;
    printf("%d\n", *p);
    printf("b = %d, c = %d, *p = %d\n", b, c, *p);
}