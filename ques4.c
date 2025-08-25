// Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
#include <math.h>

int main() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    printf("Area: %.2f\n", M_PI * radius * radius);
    printf("Circumference: %.2f\n", 2 * M_PI * radius);

    return 0;
}
