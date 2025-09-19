// Count positive, negative, and zero elements in an array.


#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            positiveCount++;
        else if (arr[i] < 0)
            negativeCount++;
        else
            zeroCount++;
    }

    printf("Total positive numbers = %d\n", positiveCount);
    printf("Total negative numbers = %d\n", negativeCount);
    printf("Total zeros = %d\n", zeroCount);

    return 0;
}
