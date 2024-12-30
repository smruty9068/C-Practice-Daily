#include <stdio.h> // Include the standard input-output library
int main() {
    static int i = 5; // Declare a static variable 'i' and initialize it to 5
    // Static variables retain their value across function calls and are initialized only once.
    if (--i) { // Pre-decrement 'i' (i.e., decrease the value of 'i' by 1 before using it in the condition)
        main(); // Recursive call to the 'main' function
        printf("%d ", i); // Print the value of 'i' after the recursive call
    }

    return 0; // Return 0 to indicate successful program termination
}

//as i is static variable and after is decremented to 0, the print statements are executes. 4,3,2,1 it takes 4 steps thus 4 0 will be printed
/*
    O/P
    0 0 0 0

    This is a recursive program where the main() function is being repeatedly
    called until the value of static variable i becomes 0.
    Hence, the main() function will be called for i value 4, 3, 2, 1. When the i becomes 0,
    then the function call stack gets empty by popping all the inserted function calls one by one. And during each pop function prints
    the updated i value which is 0(because there is only a single instance of i variable as it is static).
*/