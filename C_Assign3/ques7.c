
#include <stdio.h>

int distinctElements(int arr[], int size, int collect[]);
int distinctElements(int arr[], int size, int collect[]) {
    int i, j, index = 0;
    for (i = 0; i < size; i++) {
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }
        if (j == i) {
            collect[index++] = arr[i]; 
        }
    }
    return index;
}

int main() {
    int arr[] = {4, 7, 7, 3, 2, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int collect[size];

    int disSize = distinctElements(arr, size, collect);

    printf("Distinct elements: ");
    for (int i = 0; i < disSize; i++) {
        printf("%d ", collect[i]);
    }

    return 0;
}
