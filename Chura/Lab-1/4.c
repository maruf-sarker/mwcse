// Find the strictly larger year than the user inputted year which will have all the distinct digits.

#include<stdio.h>

int main(){
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    while(year < 1000 || year > 9999){
        printf("Enter year: ");
        scanf("%d", &year);
    }
    year++;
    while(!(year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        year++;
    }
    printf("%d\n", year);

    return 0;
}