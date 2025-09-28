// Check if the elements on the diagonal of a matrix are distinct.



#include <stdio.h>
#define MAX 10

int main() {
    int matrix[MAX][MAX];
    int n, i, j, isDistinct = 1;

    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) {
            break;
        }
    }

    if (isDistinct) {
        printf("The diagonal elements are distinct.\n");
    } else {
        printf("The diagonal elements are not distinct.\n");
    }

    return 0;
}

