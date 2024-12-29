#include<stdio.h>  // Include the standard input-output library

int main(void) {
    // Declare variables: an integer x, and an array z of size 2 with values 10 and 11
    int x = 1, z[2] = {10, 11};  
    // Declare a pointer to integer p, initialized to NULL
    int *p = NULL;  
    
    // Set p to point to the address of x
    p = &x;
    // Dereference p to set the value of x through the pointer
    *p = 10;  // Now x becomes 10, since p points to x

    // Set p to point to the second element of the array z (z[1])
    p = &z[1];
    
    // Use pointer arithmetic to modify the value of z[0]
    *(&z[0] + 1) += 3;  // Equivalent to z[1] += 3; Now, z[1] becomes 14 (11 + 3)

    // Print the values of x, z[0], and z[1]
    printf("%d, %d, %d\n", x, z[0], z[1]);  // Output: 10, 10, 14
    
    // Return 0 to indicate successful completion
    return 0;
}
