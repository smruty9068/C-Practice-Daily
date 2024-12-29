#include <stdio.h>

int main() {
    void *p;              // Declare a void pointer `p`
    int *i = 20;          // **Incorrect initialization**: `int *i = 20;` is invalid because `20` is not a valid memory address.
    p = &i;               // Assign the address of `i` to `p` (void pointer)
    void *q = p;          // Line-4: Assign the value of `p` (address of `i`) to another void pointer `q`
    // printf("%d %d %d\n", i, *p, *q); // Line-5: Uncommenting this line will cause errors
}


/*
    O/P
    (iv) compile error at line-5

    Because (void *) needs type casting to be printed.
*/
