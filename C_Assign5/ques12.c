#include<stdio.h>

// Function prototype
int *fun();

int main(void) {
    int *ptr;  // Declare a pointer to integer
    ptr = fun();  // Call the function and assign its return value to ptr
    printf("%d\n", *ptr);  // Dereference ptr to print the value
    return 0;
}

// Function definition
int *fun() {
    int a = 10, b = 20;  // Declare local variables a and b
    int sum = a+b;         // Declare and initialize the local variable sum
      // Calculate the sum of a and b
    return &sum;         // Return the address of the local variable sum
}
/*
    O/P
    (a) Unexpected behavior

    Because once the function gets executed then, 
    all its local variables get removed from call stack along with function call. 
    Hence, at the time of printing there is no address to sum variable is available.
*/