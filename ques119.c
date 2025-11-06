/* Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element.
 Try to find the result in one single iteration.
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array (0 to %d, one repeated):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int repeated = -1;
    for (int i = 0; i < n; i++) {
        int index = abs(arr[i]);
        if (arr[index] < 0) {
            repeated = index;
            break;
        }
        arr[index] = -arr[index];
    }

    printf("The repeated element is: %d\n", repeated);
    return 0;
}
