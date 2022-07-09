// Write a C program to enter temperature in °Celsius and convert it into °Fahrenheit and vice-versa in a same program.

#include<stdio.h>
int main(){
    float celsius, fahrenheit;
    int n;

    printf("Celsius to Fahrenheit? type 1: \n");
    printf("Fahrenheit to Celsius? type 2: \n");
    scanf("%d",&n);

    switch(n){
        case 1: 
            printf("Enter the temperature in Celsius: ");
            scanf("%f", &celsius);

            fahrenheit = (celsius * 9 / 5) + 32;

            printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
            break;
        case 2:
            printf("Enter the temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);

            celsius = (fahrenheit - 32) * 5 / 9;

            printf("Temperature in Celsius: %.2f\n", celsius);
            break;
    }

    return 0;
}

// Celsius to Fahrenheit? type 1: 
// Fahrenheit to Celsius? type 2: 
// 2
// Enter the temperature in Fahrenheit: 2342
// Temperature in Celsius: 1283.33



// Celsius to Fahrenheit? type 1: 
// Fahrenheit to Celsius? type 2: 
// 1
// Enter the temperature in Celsius: 1283.33
// Temperature in Fahrenheit: 2341.99
