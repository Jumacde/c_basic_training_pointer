#include "check_functions.h"

#include <stdio.h>

void check_address(int x, int x1, double y, float z, char a) {
    printf("int x is %d(%dbyte) and %d's address is 0x%x\n", x, sizeof(int), x, &x);
    printf("int x1 is %d(%dbyte) and %d's address is 0x%x\n", x1, sizeof(int), x1, &x1);
    printf("double y is %f(%dbyte) and %f's address is 0x%x\n ", y, sizeof(double), y, &y);
    printf("float z is %f(%dbyte) and %f's address is 0x%x\n ", z, sizeof(float), z, &z);
    printf("char a is %c(%d byte) and %c's address is 0x%x\n ", a, sizeof(char), a, &a);
}

