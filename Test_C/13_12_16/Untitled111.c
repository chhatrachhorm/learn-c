/* this program is written to calculate the weight on earth and on its moon */
#include<stdio.h>
main()
{
	float mass, Ge;
	printf("Enter the mass(kg) of the object");
	scanf("%f",&mass);
	Ge=mass*9.8;
	printf("the weight on earth is(N) %f", Ge);

}

