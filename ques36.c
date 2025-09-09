// Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF (GCD) is: %d\n", a);
    return 0;
}
