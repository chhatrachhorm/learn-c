/*------------------
This program was written on i forgot
-Used to find the area of Rectangle
--------------------*/

#include<stdio.h>

void main(){
	int i;
	float area, h, w;
	printf("FIND THE AREA OF RECTANGLE\n");
	for(i=0;i<35;i++)printf("+");
	printf("\n\n> Height : ");
	scanf("%f", &h);
	printf("> Width: ");
	scanf("%f", &w);
	area = (h*w)/2;
	for(i=0;i<35;i++)printf("+");
	printf("\n\nThe Area of Rectangle is : %.2f", area);
}
