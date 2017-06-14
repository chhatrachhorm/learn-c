#include<stdio.h>
int main()
{
	int ar[100], br[100], i, index, j, num, a, b; 
	char ak;
	printf("Enter number of element:"); scanf("%d", &num);
	for(i=0; i<num; i++)scanf("%d", &ar[i]);
	puts("a)Split the array by two index provision\nb)split array by providing only an index(last index is the max value)");
	fflush(stdin);
	ak = getchar();
	if(ak=='b'||ak=='B')
	{
			printf("Enter the index you want the array to be splited from: ");
			scanf("%d", &index);
			for(i=index-1, j=0; i<num; i++, j++)
			br[j]=ar[i];
			puts("Second array:");
			for(i=0; i<=num-index; i++)
			printf("%d\t", br[i]);
			puts("\nFist array(after splited):");
			for(i=0; i<index-1; i++)
			printf("%d\t", ar[i]);
	}
	else if(ak=='a'||ak=='A')
	{
		puts("Enter two values of index: ");
		scanf("%d %d", &a, &b);
		for(i=a-1, j=0; i<num; i++, j++ )
		br[j]=ar[i];
		for(i=a-1, j=b; i<b; i++, j++)
		{
			ar[i]=ar[j];
		}
		num = num - (b-a+1);
		puts("Second array:");
		for(i=0; i<num; i++)
		printf("%d\t", br[i]);
		printf("\n");
		puts("First array after being sorted:");
		for(i=0; i<b-a+1; i++)
		printf("%d\t", ar[i]);
	}
	
}
