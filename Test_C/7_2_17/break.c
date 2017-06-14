//Program to practice break;
//written by Chhatra Chhorm following Mr.Leo on 30/01/2016
#include<stdio.h>
main()
{
	int i, num, sum = 0;
	for(i=0; i<5; i++)
	{
		puts("Enter the number: ");
		scanf("%d", &num);
		if(num<0)break;
		sum += num;
	}
	printf("Sum = %d", sum);
	
	
}
