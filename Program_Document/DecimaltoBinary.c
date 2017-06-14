/*
This program was written on Dec 28, 2016
- Convert a decimal number to binary
*/

#include <stdio.h>

void main() { //-- No return value

  int dec, di = 1, ans = 0; //-- initialize ans to 0, di to 1

  printf("%s", "Enter the number: ");
  scanf("%d", &dec); //-- Get input as int to location of dec

  while ( dec != 0) //-- iterate while dec different from 0
  {
    ans = ans + (dec%2) * di; //-- multiply the remainder by di to move digit to the right by 1 digit
    dec /= 2; //-- dec = dec / 2
    di*=10; //-- di = di * 10;
  }
  printf("%d\n", ans); //-- Diplay the ans number
}
