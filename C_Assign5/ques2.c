#include<stdio.h>
int main() {
    int arr[4][5], i, j;

    // Populating the 2D array using nested loops
    for (i = 0; i < 4; i++) { // Outer loop iterates over rows
        for (j = 0; j < 5; j++) { // Inner loop iterates over columns
            arr[i][j] = 10 * i + j; // Assigning values based on the formula
        }
    }

    // Attempt to access an element using *(arr[1] + 9)
    printf("%d\n", *(arr[1] + 9)); // This is incorrect and will cause undefined behavior

    return 0;
}
