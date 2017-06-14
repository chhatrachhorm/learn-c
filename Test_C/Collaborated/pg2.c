/*------------------
This program was written on i forgot
-Used to convert the celcius to farenheit
--------------------*/

#include<stdio.h>
#include<conio.h>
void main(){
	int i, j;
	float F, C;
	printf("CONVERT THE CELSIUS TO FARENHEIT\n");
	for(i=0;i<40;i++)printf("+");
	printf("\n\n> Celcius : ");
	scanf("%f", &C);
	F = C * 1.8 + 32;
	printf("\n> Farenheit of %.2f Celsius is : %.2f\n\n", C, F);
	for(i=0;i<40;i++){
		printf("+");
		for(j=0; j<9031997; j++);
	}
	getch();
}
