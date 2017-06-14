#include<stdio.h>
int top=0;
void push(int a[]);
//void pop();

int main()
{
	int a[100], limit, cont=1, i = 0;
	char choice;
	puts("a)Enter number of data\nb)Enter data one by one ");
	choice = getchar();
	if(choice == 'a'|| choice =='A')
	{
		puts("Enter number of element you want to enter: ");
		scanf("%d", &limit);
		while(top < limit)
		{
			puts("Enter the element: ");
			push(a);
		}
		puts("Push Successful!\nHere are the data: ");
		for(i=0; i<limit; i++)
		{
			printf("%d\n", *(a+i)); 
		}
	}
	else if(choice == 'b'||choice =='B')
	{
		while(cont == 1)
		{
			puts("Enter the data: ");
			push(a);
			printf("Do you want to continue(0/1)?\n");
			scanf("%d", &cont);
			limit++;
		}
		puts("Push Successful!\nHere are the data: ");
		for(i=0; i<limit; i++)
		{
			printf("%d\n", *(a+i)); 
		}
	}
	
	
	return 1;
}
void push(int a[])
{
	scanf("%d", &a[top]);
	top++;
}
/*void pop(int a[], int nofd)
{
	while()
	{
			
	}
}*/
