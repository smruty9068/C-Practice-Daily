#include <stdio.h>
// Function declaration: `print_fibo` takes an integer `n` and prints the first `n` Fibonacci numbers.
void print_fibo(int);
// Function definition
void print_fibo(int n) {
    // Base case: If `n` is 0, stop the recursion.
    if (n == 0) 
        return;
    // Static variables to retain their values between function calls.
    static int first = 0, second = 1; 
    // `first` and `second` store the last two Fibonacci numbers in the sequence.
    printf("%d ", first); 
    // Print the current Fibonacci number (`first`).
    // Calculate the next Fibonacci number.
    int next = first + second;
    // Update the values of `first` and `second` for the next iteration.
    first = second;
    second = next;
    // Recursive call: Decrement `n` to process the next Fibonacci number.
    print_fibo(n - 1);
}
int main() {
    int n; // Variable to store the number of Fibonacci numbers to print.
    // Prompt the user to enter the value of `n`.
    printf("Enter the value of n: ");
    scanf("%d", &n); 
    // Read the input from the user.
    // Inform the user about the output.
    printf("The first %d Fibonacci numbers are: ", n);
    // Call the `print_fibo` function to print the Fibonacci sequence.
    print_fibo(n);
    return 0; 
    // Indicate successful program termination.
}

/*Enter the value of n: 5
The first 5 Fibonacci numbers are: 0 1 1 2 3*/

/*
#include<stdio.h>
void print_fibo(int);
void print_fibo(int n){
   if(n==0)
   return;
   static first=0, second=1;
   printf("%d",first);
   int next=first+second;
   first=second;
   second=next;
   print_fibo(n-1);
}
int main(){
   int n;
   printf("Enter the value of n: ");
   scanf("%d",&n);
   printf("The first %d fibonacci numbers are: ", n);
   print_fibo(n);
   return 0;
   }
*/