#include <stdio.h>
int main() {
    // Initializing a 3x3 2D array with elements in row-major order
    int a[3][3] = {4, 5, 6, 7, 8, 9, 1, 2, 3};

    // Printing the memory addresses of specific elements in the array
    printf("%p %p %p\n", a[1] + 2, *(a + 1) + 2, &a[1][2]);
/* a[1] + 2, *(a + 1) + 2, &a[1][2] => a[1]=addr of (a[1][0]),addr of (a[1][2]), addr os a[1][2] 
    0x7ffcde12342c 0x7ffcde12342c 0x7ffcde12342c  */

    // Printing the values of specific elements using different notations
    printf("%d %d %d\n", *(a[1] + 2), *(*(a + 1) + 2), a[1][2]);
/* *(a[1] + 2)=a[1][2]=9 , *(*(a + 1) + 2)=9 , a[1][2]= 9 */
    return 0;
}
