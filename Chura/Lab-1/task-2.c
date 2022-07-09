// Write a C program to enter length in centimeter and convert it into meter and kilometer. 

#include<stdio.h>
int main(){
    float cm, m, km;

    printf("Enter the length in centimeter: ");
    scanf("%f", &cm);

    m = cm / 100;
    km = cm / 100000;

    printf("Length in meter: %.2f\n", m);
    printf("Length in kilometer: %.2f\n", km);

    return 0;
}

// Enter the length in centimeter: 423434
// Length in meter: 4234.34
// Length in kilometer: 4.23

