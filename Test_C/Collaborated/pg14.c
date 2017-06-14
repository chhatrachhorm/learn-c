/*
This program was written on Dec 18, 2016
- Used to learn nested if else
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
  char username;
  int password;

  printf("%s", "Username: ");
  scanf("%c", &username);
  printf("%s", "Password: ");
  scanf("%d", &password);

  if (username == 'a') {
    if (password == 12345)
      printf("%s\n", "Login successful");
    else
      printf("%s\n", "Password is incorrect, Try again.");
  }
  else printf("%s\n", "Username is incorrect, Try again.");
  return 0;
}

