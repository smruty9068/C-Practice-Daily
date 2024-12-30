#include <stdio.h>

// Recursive function 'f' takes two arguments: n (number) and k (weight factor)
int f(int n, int k) {
    if (n == 0) // Base case: If n becomes 0, return 0.
        return 0;
    else if (n % 2) // Check if 'n' is odd.
        return f(n / 2, 2 * k) + k; 
        // Recursive call: Divide 'n' by 2, double 'k', and add 'k' to the result.
    else // If 'n' is even.
        return f(n / 2, 2 * k) - k;
        // Recursive call: Divide 'n' by 2, double 'k', and subtract 'k' from the result.
}

int main() {
    printf("%d", f(20, 1)); 
    // Call the function 'f' with initial values n = 20 and k = 1.
    return 0; 
    // Return 0 to indicate successful program termination.
}
/*
(10,2)-1// keep on calling till n=0
(5,4)-2
(2,8)+4
(1,16)-8
(0,32)+16 //n=0
*/

/*
from (0,32), return 0
(1,16), return 16+0=16
(2,8), return 16-8=8
(5,4), return 8+4=12
(10,2), RETURN 12-2=10
for (20,1), return 10-1=9
*/

// ouput= 9