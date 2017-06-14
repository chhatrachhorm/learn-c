#include<stdio.h>
//Players structure
struct players{
	char name[100], province[50], role[50];
	int roll;
}player[100];
main()
{
	int num, i;
	puts("Enter number of players: ");
	scanf("%d", &num);
	for(i=0; i<num; i++)
	{
		fflush(stdin);
		printf("Player %d:\nName: ", i+1); gets(player[i].name);fflush(stdin);
		printf("Hometown:"); gets(player[i].province);fflush(stdin);
		printf("Role: ");gets(player[i].role); fflush(stdin);
		printf("Roll Number: ");scanf("%d", &player[i].roll);
		printf("\n***\n");
	}
	puts("Here you are:");
	for(i=0; i<num; i++)
	{
		printf("%d-%d\t%s\t(%s-%s)\n", i+1, player[i].roll, player[i].name, player[i].province, player[i].role);
		
	}
}

