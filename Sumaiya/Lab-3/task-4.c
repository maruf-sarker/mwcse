// write a c program to find frequency of each digit in a given number.

#include <stdio.h>

int main()
{
    int n, i, j, ctr, r;
    printf("Enter an integer number: ");
    scanf("%d", &n);

    for (i = 0; i < 10; i++) 
    {
        printf("The frequency of %d = ", i);
        ctr = 0;
        for (j = n; j > 0; j = j / 10) 
        {
            r = j % 10;
            if (r == i) 
            {
                ctr++;
            }
        }
        printf("%d\n", ctr);
    }
}