#include<stdio.h>
#include<stdlib.h>  // Corrected to include stdlib.h for memory allocation

void fun(int **q);  // Function declaration that takes a pointer to a pointer to an integer

int main() {
    // Allocate memory for an integer and initialize it to 55
    int *p = (int *)malloc(sizeof(int));  
    *p = 55;  // Dereference the pointer and assign 55 to the allocated memory
    
    // Call fun and pass the address of p (pointer to pointer)
    fun(&p);  

    // Print the value of *p and the address stored in p (the pointer itself)
    printf("%d %p\n", *p, p);  
    //99 0x55c2e0

    return 0;
}

// Function that takes a pointer to a pointer to an integer
void fun(int **q) {
    // Dereference q to modify the pointer p (which q points to)
    *q = (int *)malloc(sizeof(int));  // Allocate new memory for p
    **q = 99;  // Dereference q twice to assign 99 to the new memory allocated
}
