#include <stdio.h>
/* Intro to bool concepts. Prints the first <input> prime numbers.
*/

int main(void) {
    int input;  // Input variable
    int p,d;    // "System" variables used in internal calculations
    _Bool isPrime;

    printf("Enter the number where you want to stop...\n>>> ");
    scanf("%i", &input);
    /* The algo is simple;
    take a numer p, try dividing it by every d where (1 < d < p)
    if it cannot be divided by any such d, it is prime - print it! */
    for (p = 2; p <= input; p++) {
        isPrime = 1;

        for (d = 2; d < p; d++) {
            if (p % d == 0) {
                isPrime = 0;
            }
        }

        if (isPrime) {
            printf("p%i ", p);
                
        }
    }
    
    printf("\n");

    return 0;
}