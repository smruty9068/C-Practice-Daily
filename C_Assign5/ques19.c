#include <stdio.h>
#include <stdlib.h>  // For malloc and realloc functions

int main() {
    int i, *p, *rp;  // Variables: `i` for loop, `p` and `rp` for dynamic memory pointers

    // Allocate memory for 5 integers
    p = (int *)malloc(5 * sizeof(int));

    // Input 5 integers into the allocated memory
    for (i = 0; i < 5; i++) {
        scanf("%d", p + i);  // Store user input in the allocated memory (e.g., 10, 20, 30, 40, 50)
    }

    // Reallocate memory to expand the size from 5 integers to 10 integers
    rp = (int *)realloc(p, 10 * sizeof(int));

    // Input 5 additional integers into the newly allocated portion
    for (i = 5; i < 10; i++) {
        scanf("%d", rp + i);  // Store user input in the extended memory (e.g., 9, 8, 6, 5, 4)
    }

    // Print all 10 integers from the reallocated memory
    for (i = 0; i < 10; i++) {
        printf("%d...%d\n", rp[i], *(rp + i));  
        // `rp[i]` accesses the ith element using array notation
        // `*(rp + i)` accesses the ith element using pointer arithmetic
    }

    return 0;  // Exit the program
}


/*
    O/P
    First the program will ask for 10 integers.(10,20,30,40,50,9,8,6,5,4)
    Then it will print the first 10 integers in the array.
    10...10
    20...20
    30...30
    40...40
    50...50
    9...9
    8...8
    6...6
    5...5
    4...4
*/