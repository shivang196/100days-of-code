// Add two matrices.
#include <stdio.h>
#define MAX 10

int main() {
    int a[MAX][MAX], b[MAX][MAX], sum[MAX][MAX];
    int i, j, row, col;

    printf("Enter rows and columns of matrices: ");
    scanf("%d %d", &row, &col);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of the matrices:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
