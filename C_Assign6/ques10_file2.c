#include <stdio.h>
#include "ques10_file1.c"

int count = 5;
int main() {
    write_extern();//5+2=7
    write_extern();//7+2=9
    printf("%d\n", count);
    return (0);
}
/*
Defines the global variable count and initializes it to 5.
Calls write_extern() twice and prints the final value of count.
*/

/*
    O/P
    9

    The function inside the file1 is being called inside file2 by including the file1 as preprocessor. count variable is defined inside file1 as an extern variable hence, it will take the value of the count variable from the file where the function is called. Then the function is incrementing the value of a by 2.
*/