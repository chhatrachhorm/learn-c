#include<stdio.h>
//Add two distances using structures
struct distance{
	int meter, kilo;
}a, b, c;
int main()
{
	printf("Enter first distance\n\t(meter):");scanf("%d", &a.meter);
	printf("\t(kilometer):");scanf("%d", &a.kilo);
	printf("Enter second distance\n\t(meter):");scanf("%d", &b.meter);
	printf("\t(kilometer):");scanf("%d", &b.kilo);
	c.meter = a.meter + b.meter;
	c.kilo = a.kilo + b.kilo;
	while(c.meter>1000)
	{
		c.kilo++;
		c.meter -= 1000;
	}
	printf("Sum = %dKm%dm", c.kilo, c.meter);
}
