// Write a C program to take an integer number n from the user and count the number of factors for each of the number from 1 to n


#include<stdio.h>
int main(){
    int n, i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);
    for (i = 1; i <= n; ++i) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

// Enter a positive integer: 50
// Factors of 50 are: 1 2 5 10 25 50 
