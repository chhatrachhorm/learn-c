/*
This program was written on Dec 17, 2016
- Reverse a number
*/

#include <stdio.h>

void main() { //-- No return value

  int n, reversed = 0; //-- initialize reversed to 0

  printf("%s", "Enter the number: ");
  scanf("%d", &n); //-- Get input as int to location of n

  while ( n != 0) //-- iterate while n different from 0
  {
    reversed = reversed*10 + n%10; //-- multiply reversed by 10 to move digit to the left by 1 digit and add remains and n modulus 10 to get the remainder of the division of n/10
    n /= 10; //-- n = n / 10
  }
  printf("%d\n", reversed); //-- Diplay the reversed number
}
