/* Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*  */



#include <stdio.h>

int main() {
    int groups[] = {1, 2, 4, 3, 1};  
    int size = sizeof(groups) / sizeof(groups[0]);

    for (int i = 0; i < size; i++) {
        
        for (int j = 0; j < groups[i]; j++) {
            printf("*\n");
        }
        
        if (i != size - 1) {
            printf("\n");
        }
    }

    return 0;
}
