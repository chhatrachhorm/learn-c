#include<stdio.h>
//Fibonacci starting from any two numbers 
int main()
{
	int i, n1, n2, n3;
	printf("Enter the first two number of Fibonacci:\n");
	scanf("%d %d", &n1, &n2);
	puts("Fibonacci sequence: ");	
	for(i=0; i<100; i++)
	{
		
		if(i==0){
			printf("%d\t", n1);
			continue;
		}
			if(i==1){
			printf("%d\t", n2);
			continue;
		}
		n3 = n1 + n2;
		n1 = n2; n2 = n3;
		printf("%d\t", n3);
		
	}
	return 0;
}
