#include <stdio.h>
/* Simple calculator. Takes a mathematical expression from the user and evaluates it.*/

int main(void) {
    float x, y;
    char operator;

    // Like many other basic programs, this one is nested in a loop. To exit, type in an invalid operator.
    while (1) {
        printf("Enter the expression you want to evaluate...\n>>> ");
        // Takes input. Cuts it into three variables - two numbers to store the operands, one char to store the operator.
        // Worth noting - scanf will trim leading spaces from numbers, but not chars.
        // Since the input string is "%i %c %i", scanf will take input as "numberSPACEoperatorSPACEnumber".
        scanf("%f %c %f", &x, &operator, &y);

        // Bevy of "if-else" to check for each operator and evaluate the right expression.
        if (operator == '+') {
            printf("<<< %.4f\n", x + y);
        } else if (operator == '-') {
            printf("<<< %.4f\n", x - y);
        } else if (operator == '*') {
            printf("<<< %.4f\n", x*y);
        } else if (operator == '/') {
            printf("<<< %.4f\n", x/ y);
        } else {
            break;                     // Special case to exit the loop.
        }
    }

    return 0;
}