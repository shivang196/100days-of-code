// Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main()
{
    unsigned int num, complement;
    printf("Enter a binary number: ");
    scanf("%u", &num);

    complement = ~num;

    printf("1's complement is: %u\n", complement);
    return 0;
}
