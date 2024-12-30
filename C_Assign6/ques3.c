#include <stdio.h>

// Global variables
int a, b, c = 0; 
// 'a', 'b', and 'c' are global variables.
// They are initialized to 0 by default (except for 'c', which is explicitly set to 0).
void prtFun(void); // Function declaration: prtFun neither returns anything nor takes any parameters.
int main() {
    auto int a = 1; // Line 1: Local variable 'a' in main with automatic storage class (default for local variables).
    // This 'a' is independent of the global variable 'a'.
    prtFun(); // First call to prtFun.
    a += 1; // Increment the local variable 'a' in main by 1. Now 'a' = 2.
    prtFun(); // Second call to prtFun.
    printf("\n %d %d ", a, b); 
    // Print the local variable 'a' from main (value is 2) and the global variable 'b' (value is 0).
    return (0); // Indicate successful program termination.
}
void prtFun(void) {
    register int a = 2; // Line 2: Local variable 'a' with register storage class (suggested for faster access), stored in the cpu register instead of main memory
    // This 'a' is independent of both the global variable 'a' and the local 'a' in main.
    int b = 1; // Non-static local variable 'b' initialized to 1 every time prtFun is called.
    a += ++b; 
    // Pre-increment 'b' (b becomes 2) and then update 'a': a = a + b.
    // On both calls to prtFun, 'a' starts as 2, so: a = 2 + 2 = 4.
    printf(" \n %d %d ", a, b); 
    // Print the local variables 'a' and 'b' from prtFun.
    // On both calls, the output will be: 4 2.
}

/*
Output:
  4 2
  4 2
  2 0

Explanation of Output:
1. The first call to prtFun initializes 'a' (register variable) to 2 and 'b' to 1.
   - 'b' is incremented to 2, and 'a' is updated to 4. Output: "4 2".

2. The second call to prtFun re-initializes 'a' to 2 and 'b' to 1.
   - Again, 'b' is incremented to 2, and 'a' is updated to 4. Output: "4 2".

3. Back in main, 'a' (local to main) has been incremented to 2, and 'b' (global) is still 0.
   - The final printf in main outputs: "2 0".

Key Points:
- The 'a' in main, the 'a' in prtFun, and the global 'a' are completely independent due to their different scopes.
- 'b' in prtFun is re-initialized on each call, while the global 'b' remains unmodified.
- The register storage class for 'a' in prtFun suggests faster access but does not affect the program's logic.
*/


/*
First Call to prtFun:
a is initialized to 2 (register variable in prtFun).
b is initialized to 1 (non-static local variable).
b is pre-incremented to 2, and a is updated: a = a + b = 2 + 2 = 4.
The values of a and b (4 and 2) are printed: Output: 4 2.

Second Call to prtFun:
a is re-initialized to 2 (local to prtFun).
b is re-initialized to 1.
b is pre-incremented to 2, and a is updated: a = a + b = 2 + 2 = 4.
The values of a and b (4 and 2) are printed again: Output: 4 2.

Back in main:
The local a in main was incremented to 2 earlier (a += 1).
The global b remains unchanged at 0 since it was never modified.
The final printf in main prints the values of a (2) and b (0): Output: 2 0.*/