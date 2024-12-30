#include <stdio.h>

// Function to convert a decimal number 'n' to binary and print it.
void f(int n) {
    if (n <= 1) { 
        // Base case: If 'n' is 0 or 1, print 'n' (least significant bit).
        printf("%d", n);
    } else {
        f(n / 2); 
        // Recursive call: Divide 'n' by 2 to process the higher-order bits.
        printf("%d", n % 2); 
        // Print the remainder when 'n' is divided by 2 (current binary bit).
    }
}

int main() {
    f(173); // Call the function with the decimal value 173.
    return 0; // Return 0 to indicate successful program termination.
}


/*
    O/P
    10101101

    This function is basically performing the conversion from decimal to binary.
*/
/*
173/2=86 print rem 1
86/2=43 rem 0
43/2=21 rem 1
21/2=10 rem 1
10/2=5 rem 0
5/2=2 rem 1
2/2=1 rem 0
1<=1 printf (1)
*/