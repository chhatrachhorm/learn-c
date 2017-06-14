/*This program is written to practice string
write by Chhorm Chhatra following Mr.Leo on 15/Feb/2017*/
#include<stdio.h>
void Display(char namo[]);
main()
{
	char name[20]; int i;
	printf("Your Name pls: ");
	scanf("%s", &name);
	printf("Your name is %s", name);
	fflush (stdin);
	i=0;
	char namo[100], cha;
	printf("\nEnter you name: ");
	while(cha != '\n')
	{
		scanf("%c", &cha);
		namo[i]=cha;
		i++;
	}
	namo[i]='\0';
	printf("Your Name: %s", namo);
	fflush (stdin);
	printf("\n Enter your name: ");
	gets(namo);
	fflush(stdin);
	puts(namo);
	fflush (stdin);
	printf("Enter another name: ");
	gets(namo);
	fflush (stdin);
	Display(namo);
}
void Display(char namo[])
{
	printf("Your other name is: ");
	puts(namo);
}
