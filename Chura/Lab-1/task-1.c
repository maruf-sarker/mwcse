// Write a C Program to Calculate Area and Circumference of Circle.

#include<stdio.h>
int main(){
    float area, circumference, radius;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = 3.1416 * radius * radius;
    circumference = 2 * 3.1416 * radius;

    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}

// Enter the radius of the circle: 3
// Area of the circle: 28.27
// Circumference of the circle: 18.85
