#include <stdio.h>
/* Takes a number as input and prints the digits in reverse order. */

int main(void) {
    int inpt, x;

    printf("Enter your number:\n>>>");
    scanf("%i", &inpt);

    do {
        printf("%i", inpt%10);
        inpt /= 10;
    } while (inpt != 0);

    printf("\n");
    return 0;
}