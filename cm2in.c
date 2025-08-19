#include <stdio.h>
/* This is a very basic program. I wrote it after completing Ch.3 of the book Prcogramming in C.
It converts centimetres to inches and vice versa. */
int main (void) {
    int cent, inch, buff;

    inch = 12;
    cent = 30;

    // %i prints the next argument in printf; %d is for ints
    printf("Entered values are: %i\" and %i cm; ", inch, cent);

    /* The value in cm is stored in buff, 
    then the value in inches is converted into cm and stored in cent.
    Therefore, the values actually switch positions. */
    buff = cent;
    cent = inch*2.54;
    inch = buff/2.54;
    // C will not go to the next line until you put in a \n; \" lets you enter double qutoes, \t adds tabs, and so on.
    printf("which become %i cm and %i\", respectively. \n", cent, inch);
    
    // Retun is required.  0 is returned by convention to indicate a run with no errors.
    return 0;
}