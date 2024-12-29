 /*(1) int process(int (*pf)(int a, int b)) ;
      This function declaration defines a function named process that takes a function pointer as its parameter and returns an integer. 
      Here's a detailed breakdown:
int process:
     process is the name of the function being defined.
     It will return an int value.
int (*pf)(int a, int b):
     pf is a pointer to a function.
     The function pointed to by pf:
     Takes two arguments of type int (a and b).
     Returns an int.

 
 (2) int (*fun(int, void (*ptr)()))();
     fun is a function that takes:
       An int.
       A function pointer (ptr) to a function that takes no arguments and returns void.
     fun itself returns a pointer to a function that takes no arguments and returns an int.


 (3) int *(*p)(int (*a)[ ]);
     p is a pointer to a function that:
     Takes a pointer to an array of integers (int (*a)[]) as its argument.
     Returns a pointer to an integer (int*).


 (4) int (*p)[10];
      p is a pointer to an array of 10 integers, 
      i.e., p holds the address of an array that contains 10 integers.


 (5) float *p[20];
     p is an array of 20 pointers to float.
     This means p can store the addresses of 20 float variables (or arrays of floats).


 (6) int p(char *a);
     p is a function that takes a single argument: a pointer to a char (i.e., a string or a single character).
     It returns an integer value (int).


 (7) int (*p(char * a))[l0];
     p is a function that takes a char * (a pointer to a char), and it returns a pointer to an array of 10 integers (int[10]).
     The array has a fixed size of 10 integers.


 (8) int * (*p [10]) (char *a);
 p is an array of 10 elements.
Each element of p is a pointer to a function that:
Takes a char * (a pointer to a character or string) as its argument.
Returns a pointer to an int.
*/