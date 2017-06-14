//program to do the replace an element of the array
//written by chhorm chhatra on 23/01/2017
#include<stdio.h>
main ()
{
	int num, i, tem, loc;
	printf("Enter number of element: ");
	scanf("%d", &num);
	int a[num];
	printf("Enter all the element\n");
	for(i=0; i<num; i++)scanf("%d", &a[i]);
	for(i=0; i<num; i++)printf("%d\n", a[i]);
	puts("Do you want to insert other value to any element?");
	puts("Y/N?");
	char choice="";
	fflush(stdin);
	choice = getchar();
	if(choice == 'Y')
	{
		printf("Enter the number you want to insert: ");
		scanf("%d", &tem);
		printf("Enter the location to be inserted: ");
		scanf("%d", &loc);
		if(0<=loc-1 && loc-1<num)
		{
			a[loc-1] = tem;
			for(i=0; i<num; i++)printf("%d\n", a[i]);
		}
		else printf("Enter the correct location\n");
	}
	else if(choice =='N')printf("");
	else printf("Please Enter the correct choice!");
	
	
}
