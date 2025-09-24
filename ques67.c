// Insert an element in an array at a given position.
#include <stdio.h>

void insertAtPosition(int arr[], int *size, int element, int position) {
    if (position < 0 || position > *size) {
        printf("Invalid position\n");
        return;
    }
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    (*size)++;
}

int main() {
    int arr[11] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = 10;
    int element = 15;
    int position = 5;

    insertAtPosition(arr, &size, element, position);

    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}