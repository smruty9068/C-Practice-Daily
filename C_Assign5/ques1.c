#include<stdio.h>
int main() {
    int arr[4][5], i, j;

    // Populating the 2D array using nested loops
    for (i = 0; i < 4; i++) { // Outer loop iterates over rows
        for (j = 0; j < 5; j++) { // Inner loop iterates over columns
            arr[i][j] = 10 * i + j; // Assigning values based on the formula
        }
    }

    // Accessing and printing the value at arr[2][4] directly
    printf("%d\n", arr[2][4]);//24

    // Accessing the same element using pointer arithmetic
    // *(arr + 2) points to the start of the third row (index 2)
    // Adding 4 to it navigates to the fifth column (index 4) of that row
    printf("%d\n", *(*(arr + 2) + 4));//24

    return 0;
}

/*arr=arr[0]
arr+2= arr[0][2]
*(arr+2)=*(arr[0][2])=the base address of the 3rd row (arr[2]).
 *(*(arr + 2) + 4)= addrress of arr[2][4]*/