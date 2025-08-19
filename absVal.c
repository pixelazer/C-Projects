#include <stdio.h>
/* Outputs the absolute value of a number input by the user. */

int main(void) {
    int numb;
    printf("Enter the number: \n>>> ");
    scanf("%i", &numb);

    printf("Its absolute value is: ");

    if (numb >= 0) {
        printf("%i\n", numb);
    } else {
        printf("%i\n", -numb);
    }

    return 0;
}