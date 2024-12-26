
#include <stdio.h>

void sumarr(int a[], int b[], int r[], int size);
void sumarr(int a[], int b[], int r[], int size) {
    for (int i = 0; i < size; i++) {
        r[i] = a[i] + b[i]; 
    }
}
int main() {
    int size = 5;
    int a[] = {3, -1, 4, -2, 5};
    int b[] = {4, 2, -3, 6, 1};
    int r[size];
    
    sumarr(a, b, r, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", r[i]);
    }

    return 0;
}
