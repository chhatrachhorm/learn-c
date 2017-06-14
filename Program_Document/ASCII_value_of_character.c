/* this program is written to find the value of ASCII of letters */
/* Writer: Chhatra Chhorm on 14/12/16 */
#include<stdio.h>
int main()
{
	char c;
	printf("The ASCII value of a character\n");
	printf("Enter a character: ");
	// Reads character input from the user
	scanf("%c", &c);

	// %d displays the integer value of a character
	// %c displays the actual character
	printf("ASCII value of %c = %d", c, c);
	return 0;
}
