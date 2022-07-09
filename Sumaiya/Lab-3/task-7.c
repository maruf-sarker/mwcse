// write a c program to calculate product of digits of any number

#include<stdio.h>
int main()
{
    int num, rem, prod = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0)
    {
        rem = num % 10; // get the last-digit
        prod *= rem; // calculate product of digits
        num /=  10;  // remove the last digit
    }
    printf("%d\n", prod);
    return 0;
}