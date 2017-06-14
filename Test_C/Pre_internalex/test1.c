#include <stdio.h>
main ()
{
	char inpt;
	printf ("Enter the grade code");
	inpt = getchar ();
	fflush (stdin);
	switch (inpt)
	{
		case 'A':
		printf ("45%");
		break;
	case 'B':
		printf ("40%");
		break;
	case 'C':
		printf ("40%");
		break;
	case 'D':
		printf ("30%");
		break;
	default :
		printf ("wrong");
	}
}
