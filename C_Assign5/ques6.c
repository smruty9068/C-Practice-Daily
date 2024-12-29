#include <stdio.h>
int main() {
    // Initializing a 3D array with dimensions inferred
    int a[][2][4] = {
        { {5, 6, 7, 8}, {9, 11, 12, 1} }
    };

    // Accessing a specific element using pointer arithmetic
    printf("%d\n", *(*(*(a + 0) + 1) + 2)); // Access and print the value at a[0][1][2]
/* *(a + 0)=a[0], *(*(a + 0) + 1)= a[0][1], *(*(*(a + 0) + 1) + 2)=a[0][1][2]*/
//12
    return 0;
}
