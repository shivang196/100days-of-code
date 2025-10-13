/*Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater 
than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, 
return the index of the first occurrence.


*/


#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, x;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the sorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target element: ");
    scanf("%d", &x);

    int ceilIndex = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ceilIndex = i;
            break;
        }
    }

    printf("Ceil of %d is at index: %d\n", x, ceilIndex);

    return 0;
}
