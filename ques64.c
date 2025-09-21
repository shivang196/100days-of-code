// Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int findMostFrequentDigit(int number) {
    int count[10] = {0};  
    int mostFrequentDigit = -1;
    int maxCount = 0;

   
    while (number > 0) {
        int digit = number % 10;
        count[digit]++;
        number /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentDigit = i;
        }
    }

    return mostFrequentDigit;
}

int main() {
    int number = 1122334455;
    int result = findMostFrequentDigit(number);
    printf("The most frequent digit is: %d\n", result);
    return 0;
}