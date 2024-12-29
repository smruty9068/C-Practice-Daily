
#include <stdio.h>

void fun() {
    int *q = (int *)malloc(sizeof(int));
    *q = 20;
}
int main() {
    int *p;
    int *r = NULL;
    fun();
    return 0;
}

/*

(i) p is a wild pointer --> True
   //A wild pointer in C or C++ is a pointer that has not been initialized and thus does not point to a valid memory location. 
   Accessing or dereferencing a wild pointer leads to undefined behavior, which can cause crashes, 
   data corruption, or other unpredictable issues in your program.
(ii) r is a NULL pointer --> True
(iii) q is dangling pointer --> False
    //A dangling pointer is a pointer that points to a memory location that has already been freed or deallocated. 
    Accessing or modifying memory through a dangling pointer leads to undefined behavior, 
    which can cause crashes, data corruption, or other unpredictable issues.
(iv) p is dangling pointer --> False
(v) fun() is making memory leak --> True
  //A memory leak occurs when dynamically allocated memory is not properly deallocated, causing the program to lose the reference to that memory.
   As a result, the memory remains occupied and cannot be reused.

*/
