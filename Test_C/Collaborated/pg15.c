/*
This program was written on Dec 18, 2016
- Used to learn if else ladder
*/

#include <stdio.h>

int main() {
  char inp;
  
  printf("%s\n", "Enter Grade Code: ");
  inp = getchar();
  fflush(stdin);

  if (inp == 'A') {
    printf("%s\n", "HRA percentage is 45");
  }
  else if (inp == 'B') {
    printf("%s\n", "HRA percentage is 40");
  }
  else if (inp == 'C') {
    printf("%s\n", "HRA percentage is 30");
  }
  else if (inp == 'D') {
    printf("%s\n", "HRA percentage is 25");
  }
  else printf("%s\n", "Invalid Grade Code");
  return 0;
}
