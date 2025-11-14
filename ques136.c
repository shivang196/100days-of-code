// Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>
enum MenuChoice {
    ADD,
    SUBTRACT,
    MULTIPLY
};
int main() {
    enum MenuChoice choice;
    int a = 10, b = 5;
    choice = ADD;

    switch (choice) {
        case ADD:
            printf("Result: %d\n", a + b);
            break;
        case SUBTRACT:
            printf("Result: %d\n", a - b);
            break;
        case MULTIPLY:
            printf("Result: %d\n", a * b);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    return 0;
}