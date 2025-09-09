// Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main()
{
    int num, product = 1;
    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0)
    {
        int digit = num % 10;
        if (digit % 2 != 0) // Check if the digit is odd
        {
            product *= digit;
        }
        num /= 10;
    }

    printf("Product of odd digits is: %d\n", product);
    return 0;
}
