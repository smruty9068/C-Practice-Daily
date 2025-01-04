
// #include <stdio.h>
// void fun(int arr[][3]) {
//     printf("%d\n", *(*(arr + 2) + 1));
//     printf("%p\n", (*arr) + 2);
//     printf("%p\n", &arr[0][2]);
//     printf("%d\n", *(((*arr) + 1) + 1));
// }
// int main() {
//     int a[][3] = {5, 6, 7, 8, 9, 4, 3, 2, 1};
//     fun(a);
//     return 0;
// }
// /*
//     O/P
//     2 (arr[2][1])
//     108 (address of arr[0][2])
//     108 (address of arr[0][2])
//     7 (arr[0][2])
// */

#include <stdio.h>

int main() {
    int b = 65;           // Declare an integer variable `b` and initialize it with the value 65.
    
    void *p = &b;         // Declare a void pointer `p` and assign it the address of `b`.
                          // A void pointer can hold the address of any data type, but cannot be dereferenced directly.
    
    int *j = (int *)p;    // Cast the void pointer `p` to an integer pointer `j`.
                          // Now `j` can be used to access the integer value stored at the address pointed to by `p`.
    
    char *ch = (char *)p; // Cast the void pointer `p` to a char pointer `ch`.
                          // Now `ch` treats the address as pointing to a `char` (1 byte of memory).

    printf("%d %c\n", *j, *ch); // Print the dereferenced values of `j` and `ch`.
                                // *j interprets the memory as an integer, while *ch interprets it as a character.

    return 0;            // Return 0 to indicate successful program execution.
}
