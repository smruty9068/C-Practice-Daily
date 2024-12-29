#include<stdio.h>
int main() {
    int a[4][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };

    // Attempt to calculate and print the value at *(*(a + **a + 2) + 3)
    printf("%d\n", *(*(a + **a + 2) + 3)); // The key expression to analyze
//19
    return 0;
}
/* **a=first element of a[0]=1.
   a+**a +2= a+1 +2=a+3= a[0][3]
   *(*( a+**a +2)+3) = a[3][3]=19*/