#include <stdio.h>
#include <stdlib.h>

int main (void) {
    printf("pip test");
    // Clears the termnal
    printf("\033[2J\033[1;1H");
    printf("pip test");

    return 0;
}