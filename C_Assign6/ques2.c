#include <stdio.h>
// Global variables
int a, b, c = 0; 
// 'a', 'b', and 'c' are global variables, initialized to 0 by default (except for 'c', which is explicitly set to 0).
void prtFun(void); // Function declaration (The func neighter returns anything nor take any parameters)
int main() {
    static int a = 1; /* Line 1 */
    // A static variable 'a' is declared in 'main', with an initial value of 1.
    // This variable is local to 'main' but retains its value between function calls.
    prtFun(); 
    // First call to 'prtFun', which works with its own local static 'a'.
    a += 1; 
    // The static 'a' in 'main' is incremented by 1. Now 'a' = 2.
    prtFun(); 
    // Second call to 'prtFun'.
    printf("\n %d %d ", a, b); 
    // Prints the value of 'a' (from 'main') and 'b' (global variable 'b', which remains unchanged as it is not modified).
    return (0);
}
//These two a variables are distinct and independent because they are declared in different scopes.
void prtFun(void) {//Local to prtFun and retains its value across calls to prtFun.
    static int a = 2; /* Line 2 */
    // A static variable 'a' is declared within 'prtFun', initialized to 2.
    // This 'a' is different from the static 'a' in 'main'. It retains its value between calls to 'prtFun'.
    int b = 1; 
    // A non-static local variable 'b' is declared and initialized to 1 every time 'prtFun' is called.
    a += ++b; 
    // 'b' is pre-incremented, so it becomes 2. Then, 'a' is updated: a = a + b.
    // On the first call, 'a' = 2 + 2 = 4.
    // On the second call, 'a' = 4 + 2 = 6 (retains the previous value from the first call).
    printf(" \n %d %d ", a, b); 
    // Prints the updated values of 'a' and 'b' within 'prtFun'.
}

/*
    O/P
    4 2
    6 2
    2 0

    The prtFun() function has been called twice inside the main() function. And the 'a' and 'b' variables which we are printing inside the main function are the local static variable 'a' and the global variable 'b'. Inside the prtFun() there is a static local variable 'a' which will retain its value all the time when the function is called. These are the different scopes.
*/

/*
1. Execution Starts with main()
Static variable a is initialized to 1.
The first call to prtFun() is made.

2. First Call to prtFun()
prtFun() initializes its static local variable a to 2 (only the first time the function is called).
b is a non-static local variable, initialized to 1 on each call.
b is incremented to 2 (++b).
a = a + b; // a = 2 + 2 = 4
 4 2
a=4, b=2

3.Back to main()
Static variable a in main() is incremented by 1:
a = a + 1; // a = 1 + 1 = 2
The second call to prtFun() is made.

4. Second Call to prtFun()
prtFun() retains the value of its static local variable a from the previous call (4).
b is again initialized to 1 (local to this call).
b is incremented to 2 (++b).
a = a + b; // a = 4 + 2 = 6
 6 2
a=6,b=2

5. Back to main()
The printf statement in main() executes:
printf("\n %d %d ", a, b);
Variables printed are:
a from main() (local static): 2.
b from the global scope: 0 (never modified in the program).
*/