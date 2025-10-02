// Count spaces, digits, and special characters in a string.    
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int spaces = 0, digits = 0, specials = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch == ' ') {
            spaces++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if ((ch < 'A' || ch > 'Z') && (ch < 'a' || ch > 'z')) {
            specials++;
        }
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", specials);

    return 0;
}
