#include <stdio.h>
int main() {
    // Initializing a 2D array with elements in row-major order
    int a[][3] = {4, 5, 6, 7, 8, 9, 1, 2, 3};
    /*int a[][3] means that a is a 2D array with an
     unspecified number of rows and exactly 3 columns in each row. 
     This is a partially defined array, where the number of rows is
      determined based on the initializer list or provided dynamically later,
     but the number of columns is fixed at compile time.*/

    // Accessing and printing specific elements using different notations
    printf("%d,", *a[2]);                     // Dereference the base address of the 3rd row
    printf("%d,", a[2][0]);                   // Access the first element of the 3rd row directly
    printf("%d ", **(a + 1 + ('b' - 'a')));   // Access the first element of the 3rd row indirectly
// *a[2][0]=1
// a[[2][0]=1
//  **(a + 1 + ('b' - 'a')) => b=98 and a=97, b-a=1; a[2][0]=1
    return 0;
}
