/* Ask the user for a filename. Check if it exists by trying to open it in read mode.
 If the file pointer is NULL, print an error message; otherwise, read and display its content.
 */
#include <stdio.h>

int main() {
    char filename[100];
    printf("Enter the filename to read: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    fclose(file);
    return 0;
}