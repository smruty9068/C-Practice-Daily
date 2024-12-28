#include <stdio.h>

int main() {
    int x = 10;          // Declare and initialize x
    int *p = &x;         // Pointer to x
    int **dp = &p;       // Pointer to pointer of x
    int z = x;           // Assign value of x to z

    // Print values using pointers and variables
    printf("Value of x = %d\n", x);
    printf("Value of *p = %d\n", *p);
    printf("Value of **dp = %d\n", **dp);
    printf("Value of z = %d\n", z);

    // Print addresses
    printf("Address of x = %p\n", (void *)&x);
    printf("Address of p = %p\n", (void *)&p);
    printf("Address stored in p (address of x) = %p\n", (void *)p);
    printf("Address of dp = %p\n", (void *)&dp);
    printf("Address stored in dp (address of p) = %p\n", (void *)dp);

    return 0;
}
