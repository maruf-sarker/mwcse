// Write a program  to calculate sum of all individual integers between x and n. where x<n.

#include <stdio.h>
int main(){
    int x, n, sum = 0, i;

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = x; i <= n; i++) {
        sum += i;
    }
    printf("Sum of all integers between %d and %d is %d\n", x, n, sum);

    return 0;
}

// Enter x: 1 
// Enter n: 10
// Sum of all integers between 1 and 10 is 55
