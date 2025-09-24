// Rotate an array to the right by k positions.

#include <stdio.h>

void rotateArray(int arr[], int size, int k) {
    k = k % size;  // Handle cases where k is greater than size
    int temp[size];
    for (int i = 0; i < size; i++) {
        temp[(i + k) % size] = arr[i];
    }
    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    rotateArray(arr, size, k);

    printf("Array after rotation: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}