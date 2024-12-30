#include <stdio.h>

int main() {
    register int a = 10; 
    // 'a' is declared as a register variable, meaning it is stored in a CPU register for faster access (if possible).
    // Register variables are meant for high-performance variables that are frequently used.
    
    int *ptr = NULL; 
    // 'ptr' is declared as a pointer to an integer and initialized to NULL.

    ptr = &a; 
    // Error: Attempt to get the address of a register variable.
    // Register variables do not have a memory address that can be accessed using the address-of operator '&'.
    // This is because register variables are stored in CPU registers (if the compiler honors the request) rather than in regular memory.
    
    *ptr = 5; 
    // This line is not reached due to the previous error.

    printf("%d", *ptr); 
    // This line is not reached due to the compilation error.

    return (0); 
    // Indicate successful program termination (if the program were to compile successfully).
}


/*
    Error: ptr = &a

    Because a is a register variable and we can't access the address of a register variable.
*/