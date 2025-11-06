// Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[0] = toupper(str[0]);
    for (int i = 1; i < strlen(str); i++) {
        if (str[i - 1] == '.') {
            str[i] = toupper(str[i]);
        } else {
            str[i] = tolower(str[i]);
        }
    }

    printf("Sentence case: %s\n", str);
    return 0;
}
#include <ctype.h>