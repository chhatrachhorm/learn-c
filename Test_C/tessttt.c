#include<stdio.h>
int main()
{
    int no; 
	char a[5];
    printf("Enter a no: ");
    scanf("%d", &no);
    /*(no & 1 && printf("odd"))|| printf("even");*/
	(no & 1 && strcpy(a, "odd") || strcpy(a, "even"));
	printf("%d is an %s number", no, a);
    return 0;
}
