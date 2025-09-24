// Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

void insertInSortedArray(int arr[], int *size, int element) {
    int i;
    for (i = *size - 1; (i >= 0 && arr[i] > element); i--) {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = element;
    (*size)++;
}

int main() {
    int arr[11] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = 10;
    int element = 15;

    insertInSortedArray(arr, &size, element);

    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}