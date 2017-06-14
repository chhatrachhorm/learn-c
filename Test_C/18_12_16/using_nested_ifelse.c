/*This program is written to practice using nested if else ladder */
/* writer: Chhatra Chhorm on 18/12/16 */
#include <stdio.h>
#include <conio.h>
main ()
{
	char username;
	int password;
	printf ("Username: ");
	scanf ("%c", &username);
	printf ("password: ");
	scanf ("%d", &password);
	if (username == 'a')
	if (password == 12345 )
	printf ("login successful");
	else
	printf ("the password is incorrect, try again");
	else
	printf ("either the username or the password is incorrect.");
}
