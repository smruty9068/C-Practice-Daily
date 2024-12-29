#include <stdio.h>

// Function to demonstrate pointer arithmetic in a 2D array
void fun(int arr[][3]) {
    // Access and print the value at arr[2][1]
    printf("%d\n", *(*(arr + 2) + 1)); //arr[2][1]=2

    // Print the memory address of arr[0][2] using pointer arithmetic
    printf("%p\n", (*arr) + 2);//arr[0][2] % p= addr

    // Print the memory address of arr[0][2] directly using & operator
    printf("%p\n", &arr[0][2]);//0x7fff0018

    // Access and print the value at arr[0][2] using pointer arithmetic
    printf("%d\n", *(((*arr) + 1) + 1)); //arr[0][2]=7
}

int main() {
    // Initializing a 2D array
    int a[][3] = {
        {5, 6, 7},
        {8, 9, 4},
        {3, 2, 1}
    };

    // Call the function with the 2D array
    fun(a);

    return 0;
}

/* 2
0061FF04
0061FF04
7 */