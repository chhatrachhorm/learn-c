#include<stdio.h>
//Largest among N numbers in an array 
int main()
{
	int i, j, temp, num, a[100], limit=0;
	puts("how many element you want to enter?");
	scanf("%d", &limit);
	for(i=0; i<limit; i++)
	scanf("%d", a+i);
	for(i=0; i<limit; i++)
	{
		for(j=i+1; j<limit; j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
			
	}
	printf("The Largest is %d", a[limit-1]);
	
	return 0;
}
