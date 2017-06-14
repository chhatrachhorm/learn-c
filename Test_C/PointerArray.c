#include<stdio.h>
main()
{
	int c[4];
	int i;
	for(i=0; i<4; ++i)
	printf("Address of c[%d]=%o\n",i, &c[i]);
	printf("Address of the whole array = %x", c);
}

