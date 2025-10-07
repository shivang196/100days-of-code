// Find the first repeating lowercase alphabet in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[26] = {0};  

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        }
    }

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z' && freq[str[i] - 'a'] > 1) {
            printf("First repeating lowercase alphabet: %c\n", str[i]);
            return 0;
        }
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}