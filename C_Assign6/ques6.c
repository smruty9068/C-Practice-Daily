#include <stdio.h>
// Recursive function to process the input number 'n'
int f(int n) {
    static int i = 1; 
    // 'i' is a static variable, initialized to 1 only once, and retains its value across function calls.
    if (n >= 5) 
        return n; 
    // Base case: If 'n' is greater than or equal to 5, return 'n'.
    n = n + 1; 
    // Increment 'n' by 1.
    i++; 
    // Increment the static variable 'i' by 1 on each recursive call. 
    // Note: In this code, 'i' is not used for any computation or output.
    return f(n); 
    // Recursive call to process the incremented value of 'n'.
}
int main() {
    int result = f(1); 
    // Call the recursive function 'f' with the initial value of 'n' as 1.
    printf("%d", result); 
    // Print the final result returned by 'f'.
    return 0; 
    // Indicate successful program termination.
}
/*
f(1), n=2
f(2), n=3
f(3), n=4
f(4), n=5
f(5), (5>=5)=> retun 5 => print 5
*/