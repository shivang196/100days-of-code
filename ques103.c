/*   Write a Program to take an array of integers as input, calculate the pivot index of this array.
 The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. 
 If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. 
 This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.



*/

#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int leftSum = 0;
    int rightSum = 0;

    for (int i = 0; i < n; i++) {
        rightSum += arr[i];
    }

    int pivotIndex = -1;
    for (int i = 0; i < n; i++) {
        rightSum -= arr[i];
        if (leftSum == rightSum) {
            pivotIndex = i;
            break;
        }
        leftSum += arr[i];
    }

    printf("Leftmost pivot index: %d\n", pivotIndex);

    return 0;
}
