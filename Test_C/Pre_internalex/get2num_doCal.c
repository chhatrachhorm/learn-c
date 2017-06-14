#include <stdio.h>
int main ()
{
	int a, b, d;
	char c;
	puts ("Simple Calculator");
	printf ("Enter the first and second number\n");
	scanf ("%d", &a);
//	printf("%d", a);
	scanf ("%d", &b);
//	printf("%d", b);
	printf ("Enter the operator ");
	fflush(stdin);
	scanf ("%c", &c);
//	printf("%c", c);
//	c = getchar();

	if ( c == '+')
	{
		d = a + b;
		printf (" %d + %d = %d", a, b, d );
	}
	else if (c == '-')
	{
		d = a - b;
		printf (" %d - %d = %d", a, b, d );
	}
	else if (c == '*')
	{
		d = a * b;
		printf (" %d * %d = %d", a, b, d );
	}
	else if (c == '/')
	{
		d = a / b;
		printf (" %d / %d = %d", a, b, d );
	}
	else
	{
		printf ("please enter the correct operator");
	}
	return 0;
}
