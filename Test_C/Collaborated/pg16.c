/*
This program was written on Dec 19, 2016
- Used to learn switch-case
*/

#include <stdio.h>

int main() {

  int chc;

  puts("         Menu        ");
  puts("1. Create a Directory");
  puts("2. Delete a Dcrectory");
  puts("3. Show a Directory");
  puts("Exit");
  puts(" "); //-- display a blank line
  printf("> Choice: ");
  chc = getchar(); //-- accept choice
  fflush(stdin);
  switch (chc) {
    case '1' :
      puts("Choice is 1");
      break;
    case '2' :
      puts("Choice is 2");
      break;
    case '3' :
      puts("Choice is 3");
      break;
    case '4' :
      puts("Choice is 4");
      break;
    default :
      puts("Invalid Choice!");
  }
  return 0;
}
