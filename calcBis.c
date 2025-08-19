#include <stdio.h>
// Improved version of the calculator using switch case

int main (void) {
    float x, y;
    char operator;

    while (1) {
        printf("Enter the problem: \n>>>");
        scanf("%f %c %f", &x, &operator, &y);
        switch (operator) {
            case '+':
                printf("%.4f\n", x + y);
                break;

            case '-':
                printf("%.4f\n", x - y);
                break;

            case '*':
                printf("%.4f\n", x * y);
                break;

            case '/':
                printf("%.4f\n", x / y);
                break;
            
            default:
                printf("Unrecognized operator\n");
                break;
        }
    }

    return 0;
}