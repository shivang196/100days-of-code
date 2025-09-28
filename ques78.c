// Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>
#define MAX 10

int main() {
    int matrix[MAX][MAX];
    int n, i, j, sum = 0;

    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("The sum of the main diagonal elements is: %d\n", sum);

    return 0;
}
