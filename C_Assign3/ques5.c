
#include <stdio.h>
#include <stdbool.h>

int binarySearch(int arr[], int size, int target);
int binarySearch(int arr[], int size, int target) {
    int bottom = 0, top = size - 1;
    bool found = false;
    int index = -1;

    while (bottom <= top) {
        int middle = bottom + (top - bottom) / 2;

        if (arr[middle] == target) {
            index = middle;
            return index;
        } else if (arr[middle] > target) {
            top = middle - 1;
        } else {
            bottom = middle + 1;
        }
    }
    return index;
}

int binarySearchRecursive(int arr[], int bottom, int top, int target);
int binarySearchRecursive(int arr[], int bottom, int top, int target) {
    if (bottom <= top) {
        int mid = bottom + (top - bottom) / 2;

        if(arr[mid] == target) {
            return mid;
        } else if(arr[mid] < target) {
            return binarySearchRecursive(arr, mid + 1, top, target);
        } else if(arr[mid] > target) {
            return binarySearchRecursive(arr, bottom, mid - 1, target);
        }
    }
    return -1;
}

int main() {
    int arr[] = {1,3,5,7,9,11,13};
    float target = 5;
    int size = sizeof(arr) / sizeof(arr[0]);

    int index = binarySearchRecursive(arr, 0, size - 1, target);
    if (index != -1) {
        printf("Target element found at index: %d.", index);
    } else {
        printf("Target element not found in the array.");
    }

    return 0;
}
