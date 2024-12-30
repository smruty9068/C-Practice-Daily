#include <stdio.h>

// Global variable
int i = 5;

int main() {
    extern int j; 
    // Declare `j` as an external variable, referring to a global `j` defined outside the `main` function.

    printf("\ni=%d \nj=%d", i, j); 
    // Attempt to print `i` (global variable) and `j` (externally declared variable).

    int j = 10; 
    // Declare a new local variable `j` with an initial value of 10. 
    // This creates a conflict with the global `j` due to variable shadowing.
    
    return 0;
}

// Global variable
int j = 10; 
// Define a global `j` with an initial value of 10.


/*
    O/P
    Linkage error as there are multiple variables with name j.
*/
