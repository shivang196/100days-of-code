// Find the sum of each row of a matrix and store it in an array.


#include <stdio.h>#define MAX 10
#define MAX 10

int main() {
    int matrix[MAX][MAX];
    int rowSums[MAX] = {0};
    int i, j, rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            rowSums[i] += matrix[i][j];
        }
    }

    printf("Sum of each row:\n");
    for (i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, rowSums[i]);
    }

    return 0;
}