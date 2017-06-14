#include<stdio.h>
//Area of circle using pointers 
#define pi 3.14
int main()
{
	float *d=malloc(2);
	char a;
	puts("Area of Circle:\na)By Diameter\nb)By Radius ");
	a =getchar();
	if(a=='A'||a=='a')
	{
		scanf("%f", d+1);
		*(d)=*(d+1) * *(d+1) * pi * 0.25;
		printf("Area of circle(square unit) is %.3f", *d);
	}
	else if(a=='b'||a=='B')
	{
		scanf("%f", d+1);
		*(d)=*(d+1) * *(d+1) * pi;
		printf("Area of circle(square unit) is %.3f", *d); 
	}
	return 0;
}
