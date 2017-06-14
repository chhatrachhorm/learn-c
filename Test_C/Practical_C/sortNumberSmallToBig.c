#include<stdio.h>
main()
{
	int no, i, j, temp;
	puts("Enter Number of element");
	scanf("%d", &no);
	puts("Enter the element: ");
	int a[no];
	for(i=0; i<no; i++)scanf("%d", &a[i]);
	for(i=0; i<no; i++)
	{
		for(j=0; j<no-1-i; j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
				
		}
	}
	for(i=0; i<no; i++)
	{
		printf("%d", a[i]);
		printf("\n");
	}
	for(i=1; i<no; i++)
	if(a[0]<a[i])
	{
		printf("The second smallest is %d", a[i]);
		break;
	}
}
