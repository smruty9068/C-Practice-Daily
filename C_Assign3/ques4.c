
#include <stdio.h>

void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int merged[]);
void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int i = 0, j = 0, index = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merged[index++] = arr1[i++];
        } else {
            merged[index++] = arr2[j++];
        }
    }

    while (i < size1) {
        merged[index++] = arr1[i++];
    }
    while (j < size2) {
        merged[index++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {10, 30, 50, 70, 90};
    int arr2[] = {20, 40, 60, 80};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int merged[size1 + size2];
    mergeSortedArrays(arr1, size1, arr2, size2, merged);

    printf("Merged Array: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }
    return 0;
}
