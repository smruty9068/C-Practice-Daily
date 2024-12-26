#include <stdio.h>

int main() {
    int input1, input2, input3;
    printf("Enter three numbers: ");
    int scanReturn = scanf("%d, %d, %d", &input1, &input2, &input3);
    printf("scan returned: %d", scanReturn);
    return 0;
}
/*
    Possible returns of scanf() function:

    positive number: When inputs of correct data type is input scanf() function returns the no of inputs

    0: When input is of incorrect data type

    -1: When no input is given from user
*/