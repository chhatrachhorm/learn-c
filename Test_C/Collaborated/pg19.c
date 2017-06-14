/*
This program was written on Dec 19, 2016
- Used to learn for-loop
- Used to find sum of first 10 || n^th natural number //-- Count from zero(0)
*/

#include <stdio.h>

int main() {

  int i,  sum = 0, count;

  printf("%s", "Enter the n^th number to sum: ");
  scanf("%d", &count);
  for (i = 0; i < count; i++) {
    sum += i;
  }
  printf("The sum of the first %d numbers is %d", count, sum);

  return 0;
}
