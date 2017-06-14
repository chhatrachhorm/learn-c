#include<stdio.h>
main()
{
	int i, clas[6], sum=0;
	printf("Enter 6 Numbers: \n");
	for(i=0; i<6; i++)
	{
		scanf("%d", (clas+i));
		sum += *(clas+i);
	}
	printf("Sum = %d", sum);
	return 0;
}
