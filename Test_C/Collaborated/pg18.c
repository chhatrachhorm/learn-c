/*
This program was written on Dec 19, 2016
- Used to find the ascii value of a character
*/

#include <stdio.h>

int main() {

  char c;

  printf("%s", "Enter a character: ");
  scanf("%c", &c);
  printf("ASCII value of %c = %d", c, c);
  return 0;
}
