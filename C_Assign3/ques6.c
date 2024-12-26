
#include <stdio.h>

int isPresent(int arr[], int size, int target);
int isPresent(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            return 1;
    }
    return 0;
}

int differenceOfSets(int arr1[], int arr2[], int size1, int size2, int diff[]);
int differenceOfSets(int arr1[], int arr2[], int size1, int size2, int diff[]) {
    int index = 0;
    for (int i = 0; i < size1; i++) {
        if (!isPresent(arr2, size2, arr1[i]) && !isPresent(diff, index, arr1[i])) {
            diff[index++] = arr1[i];
        }
    }
    return index;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 7};
    int arr2[] = {2, 4, 5, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int diff[size1];

    int size3 = differenceOfSets(arr1, arr2, size1, size2, diff);
    printf("arr1 - arr2 = { ");
    for(int i = 0; i < size3 ; i++) {
        printf("%d ", diff[i]);
    }
    printf("}");

    return 0;
}
