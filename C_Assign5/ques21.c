#include <stdio.h>

// Function `f` takes an integer `n` and prints a sequence of values
int f(int n) {
    // Loop: Decrement `n` in each iteration and check if `n >= 0`
    while (--n >= 0) {
        printf("%d ", n - 2);  // Print `n - 2` in each iteration
    }
    return 1;  // Return 1 (not used in this example)
}

int main() {
    // Declare a function pointer `p` that points to the function `f`
    int (*p)(int) = f;

    // Call the function `f` through the function pointer `p` with argument 8
    (*p)(8);

    return 0;  // Exit the program
}

/*
    O/P
    5 4 3 2 1 0 -1 -2
*/
