
#include <stdio.h>

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - (i + 1); j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap using a temporary variable
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                // Swap using XOR operation
                // arr[j] ^= arr[j + 1];
                // arr[j + 1] ^= arr[j];
                // arr[j] ^= arr[j + 1];
            }
        }
    }
}

int main() {
    int arr[] = {3, 2, 5, 4, 8, 7};
    bubbleSort(arr, 6);

    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
