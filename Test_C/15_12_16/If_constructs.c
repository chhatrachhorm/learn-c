
/*this program is written to ask the age of the player whether user is appropriate or not */
/* writer: Chhatra Chhorm on 15/12/16 */
#include <stdio.h>
main ()
{
	int age;
	printf ("Enter your age: ");
	scanf ("%d", &age);
	if ( age> 18 )
	{
		printf ("This game is for kids only, not for you\n");
	}
	printf ("\t The game starts");
}
