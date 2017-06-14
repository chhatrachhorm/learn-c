/* this program is written to practice the nested for loop */
/* writer: Chhatra Chhorm on 29/12/17 */
#include <stdio.h>
main ()
{
	char chc = ' ';
	int vo = 0, nvo = 0;
	while (chc !='!')
	{
		chc = getchar ();
		fflush (stdin);
		switch (chc)
		{
			case 'A':
				vo = vo +1;
				break;
			case 'a':
				vo = vo +1;
				break;
			case 'E':
				vo = vo +1;
				break;
			case 'e':
				vo = vo +1;
				break;
			case 'I':
				vo = vo +1;
				break;
			case 'i':
				vo = vo +1;
				break;
			case 'O':
				vo = vo +1;
				break;
			case 'o':
				vo = vo +1;
				break;
			case 'U':
				vo = vo +1;
				break;
			case 'u':
				vo = vo +1;
				break;
			default:
				nvo = nvo + 1;
		}
	}

		if (vo > nvo)
		printf ("The number of vowel is greater than non-vowel");
		else if (vo < nvo)
		printf ("The number of non-vowel is greater than vowel");
		else
		printf ("Equal");

}
