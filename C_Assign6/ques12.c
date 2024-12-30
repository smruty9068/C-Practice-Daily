//Q12) Write a program to find the sum of an array elements using recursion.

#include <stdio.h>
// Function declaration for sum_of_array.
// It takes a pointer to an array and an integer `i` (index).
int sum_of_array(int *, int);
// Function definition
int sum_of_array(int *array, int i) {  
    // A static variable `sum` is declared but unused in the calculation.
    static int sum = 0;
    // Base case: If `i` (index) is less than 0, return the accumulated sum.
    if (i < 0) {
        return sum; // Sum is not updated, so this line has no impact in the current code structure.
    }
    // Recursive case: Add the value of the current array element to the result of the next recursive call.
    return array[i] + sum_of_array(array, i - 1);
}
int main() {
    int array[] = {1, 2, 3, 4, 5}; 
    // An array of integers is defined with elements: 1, 2, 3, 4, 5.
    int size = sizeof(array) / sizeof(array[0]); 
    // Calculate the number of elements in the array by dividing the total size of the array by the size of an individual element.
    // `size` will be 5.
    int sum_of_elements = sum_of_array(array, size - 1);
    // Call the `sum_of_array` function, passing the array and the last index (`size - 1`) as arguments.
    // `size - 1` is used because array indexing starts at 0.
    printf("The sum of the elements of the array is %d.", sum_of_elements);
    // Print the sum of all elements in the array.
    return 0; 
    // Indicate successful program termination.
}
