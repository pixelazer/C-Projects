#include <stdio.h>
/* Tests whether a year is a leap year. */

int main (void) {
    int year;
    int cont;

    // Five reps for easier testing.
    for (cont = 0; cont < 5; cont++) {
        printf("Enter the year you would like to test:\n>>> ");
        scanf("%i", &year);

        // A year is a leap year if:
        // It is divisible by 4 and not divisible by 100, unless it is also divisible by 400.
        // here represtented as:
        // year IS leap if (year IS divisible by 4) AND ([year IS NOT divisible by 100] OR [year IS divisible by 400])
        if ((year % 4) == 0 && (((year % 100) != 0) || ((year % 400) == 0))) {
            printf("%i is a leap year!\n", year);
        } else {
            printf("%i is not a leap year.\n", year);
        }
    }
    return 0;
}