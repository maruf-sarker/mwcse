// Write a C program to take an integer number n from the user and generate all the prime numbers from 1 to n

#include<stdio.h>
int main(){
    int i, num, n, count;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(num = 1;num <= n; num++){
      count = 0;
      for(i = 2;i <= num / 2; i++){
         if(num % i == 0){
            count++;
         break;
      }
    }
    if(count == 0 && num != 1)
        printf("%d ",num);
    }
    printf("\n");

    return 0;
}

// Enter the value of n: 50
// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 