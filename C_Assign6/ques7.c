#include <stdio.h>
// Function 'r' that uses a static variable
int r() {
    static int num = 7; 
    // 'num' is a static variable, initialized to 7 only once and retains its value between calls.
    return num--; 
    // Return the current value of 'num', then decrement 'num' by 1.
}
int main() {
    // The for-loop calls r() in its initialization, condition, and increment sections.
    for (r(); r(); r())
        printf("%d ", r()); 
        // Print the value returned by r() in the body of the loop.
    return 0; 
    // Indicate successful program termination.
}


/*
    O/P
    5 2

    Tracing the execution:
    step1 - for (7, 6, )
                print(5)
    step2 - for (7, 3, 4)
                print(2)
    step3 - for (7, 0, 1)  **This is the line where program will stop execution as condition gets 0(false).
                print(-1)
*/
