// Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Swapping using a third variable
    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
