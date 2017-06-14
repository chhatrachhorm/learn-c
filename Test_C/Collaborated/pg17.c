/*
This program was written on Dec 19, 2016
- Used to find the biggest number of three numbers
*/

#include <stdio.h>

int main() {

  int a, b, c;

  puts("Finding the biggest number");
  printf("%s", "Enter 'a' value: ");
  scanf("%d", &a);
  printf("%s", "Enter 'b' value: ");
  scanf("%d", &b);
  printf("%s", "Enter 'c' value: ");
  scanf("%d", &c);
  /*--------------
  MAX = a;
  if(MAX < b) MAX = b;
  if(MAX < c ) MAX = c;
  printf("The maximum number is %d", MAX);
  ----------------*/
  if (a > b && a > c) printf("The biggest number is a: %d", a);
  else if (b > c) printf("The biggest number is b: %d", b);
  else printf("The biggest number is c: %d", c);
  return 0;
}
