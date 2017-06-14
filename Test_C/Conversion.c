#include<stdio.h>
void d(int a, int *b, int *o, char hex[]);
int main()
{
	int i, num; char check;
	int bi, oct; 
	char hex[100];
	int *o = &oct, *b = &bi;
	puts("Choose any of the choices below:");
	puts("a)Convert from Decimal to Binary, Hexadecimal and Octal");
	puts("b)Convert from Binary to Decimal, Hexadecimal and Octal");
	check = getchar(); fflush(stdin);
	if(check == 'a' || check =='A')
	{
		printf("Enter Decimal Number: ");
		scanf("%d", &num);
		d(num, b, o, hex);
		puts("Here you are:");
		printf("%d = %d = %d =", num, *b, *o);
		puts(hex);
	}
	return 0;
}
void d(int a, int *b, int *o, char hex[])
{
	int di =1, c=a, rem, i = 0;
	while(a)
	{
		*b = (a%2) * di + *b;
		a /= 2; di *= 10;
	}
	a = c;
	di = 1;
	while(a)
	{
		*o = (a%8) * di + *o;
		a /= 8; di *= 10;
	}
	a = c;
	while(a)
	{
		rem = a % 16;
		switch(rem)
		{
			case 10:
				*(hex+i) = 'A';
				break;
			case 11:
				*(hex+i) = 'B';
				break;
			case 12:
				*(hex+i) = 'C';
				break;
			case 13:
				*(hex+i) = 'D';
				break;
			case 14:
				*(hex+i) = 'E';
				break;
			case 15:
				*(hex+i) = 'F';
				break;
			default:
				*(hex+i) = rem + '0';
		}
		i++;
		a /= 16;
	}
	*(hex+i) = '\0';
	
}
