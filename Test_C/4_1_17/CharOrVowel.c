/* this program is written to find whether the given character is vowel or consonant */
/* writer: Chhatra Chhorm on 4/1/17 */
#include <stdio.h>
main ()
{
	char ch;
	puts ("Enter the letter: ");
	ch = getchar ();
	fflush (stdin);
	switch (ch)
	{
		case 'A':
	case 'a':
	case 'E':
	case 'e':
	case 'I':
	case 'i':
	case 'O':
	case 'o':
	case 'U':
	case 'u':
		printf ("You have just entered an vowel");
		break;
	default:
		printf("You have just entered a consonant");
	}


}
