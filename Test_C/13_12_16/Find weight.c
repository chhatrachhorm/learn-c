/* this program is written to calculate the weight on earth and on its moon */
#include<stdio.h>
main()
{
	int i;
	float mass, Ge, Gm;
	printf("Convert your mass to weight");
	printf("\n>Enter the mass(kg) of the object");
	scanf("%f",&mass);
	Ge=mass*9.8;
	Gm=Ge/6;
	printf("the weight on earth is(N) %f\n", Ge);
	printf("the weight on moon is(N) %f\n", Gm);
	for(i=0;i<40;i++)printf("+");
}
