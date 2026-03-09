#include "check_address.h"

#include <stdio.h>

int check_add_int(int x) {
    printf("int x is %d(%dbyte) and %d's address is 0x%x\n", x, sizeof(int), x, &x);
}

int check_add_int1(int x1) {
    printf("int x1 is %d(%dbyte) and %d's address is 0x%x\n", x1, sizeof(int), x1, &x1);
}


double check_add_doube (double y) {
    printf("double y is %f(%dbyte) and %f's address is 0x%x\n ", y, sizeof(double), y, &y);
}

float check_add_float(float z) {
    printf("float z is %f(%dbyte) and %f's address is 0x%x\n ", z, sizeof(float), z, &z);
    
}

char check_add_char(char a) {
    printf("char a is %c(%d byte) and %c's address is 0x%x\n ", a, sizeof(char), a, &a);

}