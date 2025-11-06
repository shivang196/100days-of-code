/* Read a text file and count the total number of characters, words, and lines. 
A word is defined as a sequence of non-space characters separated by spaces or newlines.
 */
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("info.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int ch;
    int char_count = 0;
    int word_count = 0;
    int line_count = 0;
    int in_word = 0;

    while ((ch = fgetc(file)) != EOF) {
        char_count++;

        if (ch == '\n') {
            line_count++;
        }

        if (isspace(ch)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            word_count++;
        }
    }

    fclose(file);

    printf("Total characters: %d\n", char_count);
    printf("Total words: %d\n", word_count);
    printf("Total lines: %d\n", line_count);

    return 0;
}
