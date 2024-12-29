#include <stdio.h>

// Function declarations
int fun1(int, int);  // Adds two integers
int fun2(int, int);  // Multiplies two integers

int main() {
    int x, y;
    
    // Declare an array of function pointers
    int (*fun_ptr[2])(int, int);
    
    // Assign fun1 to the first element of the array
    fun_ptr[0] = fun1;
    // Call fun1 through the function pointer
    x = fun_ptr[0](4, 5);  // x = 4 + 5 = 9
    
    // Assign fun2 to the second element of the array
    fun_ptr[1] = fun2;
    // Call fun2 through the function pointer
    y = (*fun_ptr[1])(4, 5);  // y = 4 * 5 = 20
    
    // Print the results
    printf("%d...%d\n", x, y);  // Output: 9...20
    
    return 0;
}

// Function definitions
int fun1(int x, int y) {
    return x + y;  // Adds x and y
}

int fun2(int x, int y) {
    return x * y;  // Multiplies x and y
}


/*
    O/P
    9...20
*/
