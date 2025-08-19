#include <stdio.h>
/* Program to calculate the average of a set of grades and count
the number of failing test grades, out of a set input by the user. */

int main (void) {
    int noOfGrades, 
        grade, 
        failCount = 0;
    float total = 0.0f;

    printf("Enter the number of grades you want to evalutate:\n");
    scanf("%i", &noOfGrades);

    for (int temp = noOfGrades; temp > 0; temp--) {
        printf("Enter a grade:\n>>> ");
        scanf("%i", &grade);

        total += grade;
        if (grade <= 60) {
            failCount++;
        }
    }

    total /= noOfGrades;

    printf("Average grade: %.2f\n", total);
    printf("Number of failures: %i\n", failCount);

    return 0;
}