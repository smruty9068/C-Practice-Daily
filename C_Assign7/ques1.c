// Select the invalid member of the following structure
 struct oswcourse{
 int secid;
 float avgm;
 char present;
 //int *marks();, function declarations are not allowed inside structures in C.
 //int teacher(); , function declarations are not allowed inside structures in C.
 }o1,o2;

//int *marks() -> int (*marks)(void); // Pointer to a function returning int.
//int teacher() -> int (*teacher)(void); // Pointer to a function returning int.

/*
Why Function Pointers?: 
In C, you can store the address of a function in a pointer and invoke it later. 
This is the correct way to use functions in a structure.

Alternative for Encapsulation:
 If you need to associate functions with a structure, you can define them outside the structure and pass the structure as an argument to those functions.
*/