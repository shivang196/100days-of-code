// Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    // Reverse the integer
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Check if the original number is equal to the reversed number
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
