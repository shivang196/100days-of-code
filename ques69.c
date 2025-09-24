// Find the second largest element in an array.

#include <stdio.h>

int findSecondLargest(int arr[], int size) {
    int first = -1, second = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return second;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int secondLargest = findSecondLargest(arr, size);
    if (secondLargest != -1) {
        printf("Second largest element is: %d\n", secondLargest);
    } else {
        printf("Array does not have a second largest element\n");
    }
    return 0;
}