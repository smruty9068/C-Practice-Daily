#include <stdio.h>
// Function with a static variable
int funcp() {
    static int x = 1; 
    // 'x' is a static variable, initialized to 1 only once.
    // It retains its value across multiple calls to 'funcp'.
    x++; 
    // Increment the value of 'x' by 1.
    return x; 
    // Return the updated value of 'x'.
}
int main() {
    int x, y; 
    // Declare two local variables 'x' and 'y'.
    x = funcp(); 
    // First call to funcp():
    // 'x' in funcp is incremented from 1 to 2 and returned. 
    // The value of 'x' in main is now 2.
    y = funcp() + x; 
    // Second call to funcp():
    // 'x' in funcp is incremented from 2 to 3 and returned. 
    // This value (3) is added to 'x' in main (2).
    // y = 3 + 2 = 5.
    printf("%d\n", (x + y)); 
    // Add 'x' and 'y' in main:
    // x = 2, y = 5.
    // Output: x + y = 2 + 5 = 7.
    return 0; 
    // Indicate successful program termination.
}


/*
    O/P
    7
*/
