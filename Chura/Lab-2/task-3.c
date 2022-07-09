// Calculate the sum of even numbers between 1 and n. Where n is taken from user input.

#include <stdio.h>

int main(){
    int n, sum = 0;

    printf("Input the number of terms(n): ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            sum += i;
        }
    }

    printf("The sum of even numbers between 1 and %d is %d\n", n, sum);

    return 0;
}