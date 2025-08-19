#include <stdio.h>
/* Another basic program. 
Takes two postive ints as input and finds the highest common factor. */


int main(void){
    int u, v, temp;
    printf("Enter two positive intergers.\n>>>");
    scanf("%i%i", &u, &v);

    while (u != 0) {
        temp = v % u;
        v = u;
        u = temp;
    }

    printf("The greatest common divisor is: %i\n", v);
    return 0;
}