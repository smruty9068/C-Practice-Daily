#include <stdio.h>
#include <stdlib.h>  // Include the standard library for memory allocation and free

int main() {
    int *p = NULL;  // Declare a pointer p to an integer and initialize it to NULL
    
    // Allocate memory for an integer and assign the address to p
    p = (int *)malloc(sizeof(int));
    
    // Check if memory allocation was successful
    if (p == NULL) {
        printf("Memory allocation failed for p.\n");
        return 1;  // Exit the program if memory allocation fails
    }

    // Assign the value 10 to the memory location pointed by p
    *p = 10;

    // Free the memory allocated to p
    free(p);    
    int *q;  // Declare a pointer q to an integer
    // Allocate memory for an integer and assign the address to q
    q = (int *)malloc(sizeof(int));    
    // Check if memory allocation was successful
    if (q == NULL) {
        printf("Memory allocation failed for q.\n");
        return 1;  // Exit the program if memory allocation fails
    }
    // Assign the value 15 to the memory location pointed by q
    *q = 15;
    // Print the values pointed by p and q
    // Note: p has been freed, so accessing *p is undefined behavior
    printf("%d %d\n", *p, *q);  // Undefined behavior: Dereferencing a freed pointer
    // Free the memory allocated to q
    free(q);
    return 0;
}
