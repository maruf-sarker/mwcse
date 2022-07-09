// Write a C program to enter marks of five subjects and calculate total and average marks. 

#include<stdio.h>
int main(){
    float bangla, english, physics, chemistry, biology, total, average;

    printf("Enter marks of Bangla: ");
    scanf("%f", &bangla);
    printf("Enter marks of English: ");
    scanf("%f", &english);
    printf("Enter marks of Physics: ");
    scanf("%f", &physics);
    printf("Enter marks of Chemistry: ");
    scanf("%f", &chemistry);
    printf("Enter marks of Biology: ");
    scanf("%f", &biology);

    total = bangla + english + physics + chemistry + biology;
    average = total / 5;

    printf("Total marks: %.2f\n", total);
    printf("Average marks: %.2f\n", average);

    return 0;
}