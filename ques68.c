// Delete an element from an array.

#include <stdio.h>

void deleteElement(int arr[], int *size, int position) {
    if (position < 0 || position >= *size) {
        printf("Invalid position\n");
        return;
    }
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

int main() {
    int arr[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = 10;
    int position = 5;

    deleteElement(arr, &size, position);

    printf("Array after deletion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}