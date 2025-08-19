#include <stdio.h>
/* Displays integers in octal, hex, and regular (base-10) formats.*/
int main(void) {
    int octal = 012;
    int hexadecimal = 0xFFEF0D;

    printf("Octal is %i in regular numbers, %o in octal numbers, and %x in hexadecimal;\nHexadecimal is %i %o %x\n", octal, octal, octal, hexadecimal, hexadecimal, hexadecimal);

    return 0;
}