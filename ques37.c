// Write a program to find the LCM of two numbers.

#include <stdio.h>

int main()
{
    int a, b, lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    int gcd;
    int tempA = a;
    int tempB = b;

    while (tempB != 0)
    {
        int remainder = tempA % tempB;
        tempA = tempB;
        tempB = remainder;
    }
    gcd = tempA;

    lcm = (a * b) / gcd;

    printf("LCM is: %d\n", lcm);
    return 0;
}
