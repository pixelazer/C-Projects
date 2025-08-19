#include <stdio.h>
/* Take two numbers as input from the user, check if second evenly divides the first. */

int main (void) {
    int num1, num2;
    printf("Enter the two numbers:\n>>> ");
    scanf("%i %i", &num1, &num2);

    (num1 % num2 == 0) ? printf("The first is divisible by the second") : printf("The first is not divisible by the second.");

    return 0;
}