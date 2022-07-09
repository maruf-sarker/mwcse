// write a c program to enter a number and print its digit in rev order

#include <stdio.h>

int main() {

  int n, rev = 0, rem;

  printf("Enter an integer: ");
  scanf("%d", &n);

  while (n != 0) {
    rem = n % 10;
    rev = rev * 10 + rem;
    n /= 10;
  }

  printf("Reversed number = %d\n", rev);

  return 0;
}