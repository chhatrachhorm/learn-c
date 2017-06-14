/*
This program was written on Dec 19, 2016
- Used to learn while-loop
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {

  int i = 0, sum = 0;

  while (i < 10) {
    sum += i;
    printf("sum of %d is %d\n", i+1, sum);
    i++;
  }
  printf("%d\n", sum);
  return 0;
}
