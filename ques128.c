/* Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
 */
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int ch;
    int vowel_count = 0;
    int consonant_count = 0;

    while ((ch = fgetc(file)) != EOF) {
        ch = tolower(ch);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowel_count++;
            } else {
                consonant_count++;
            }
        }
    }

    fclose(file);

    printf("Total vowels: %d\n", vowel_count);
    printf("Total consonants: %d\n", consonant_count);

    return 0;
}
