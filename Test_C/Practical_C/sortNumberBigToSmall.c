#include<stdio.h>
main()
{
	int i, j, temp, no;
	puts("Enter no of Element: ");
	scanf("%d", &no);
	puts("Enter element");
	int a[no];
	for(i=0; i<no; i++)scanf("%d", &a[i]);
	for(i=0; i<no; i++)for(j=0; j<no-i-1; j++)if(a[j]<a[j+1])
	{
		temp = a[j];
		a[j]= a[j+1];
		a[j+1]=temp;
	}
	for(i=0; i<no; i++)printf("%d\n", a[i]);
	printf("The second big number is %d", a[1]);
	for(i=0; i<no; i++)
	if(a[0]>a[i])
	{
		printf("The second biggest is %d", a[i]);
		break;
	}
}
