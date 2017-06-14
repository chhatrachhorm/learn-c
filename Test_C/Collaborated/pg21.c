/*
This program was written on Dec 19, 2016
- Used to learn do-while-loop
*/

#include <stdio.h>
#include <conio1.h>
int main() {

  int i, sum = 0, count;

  do {
    system("cls");
    sum = 0;
    printf("%s", "Enter the n^th number to sum: ");
    scanf("%d", &count);
    for (i = 0; i < count; i++) {
      sum += i;
    }
    printf("The sum of the first %d numbers is %d", count, sum);
    printf("\n\n%s", "Again? [Y/N]: ");
  } while(getch() == 'y');

  return 0;
}
