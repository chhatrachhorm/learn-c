#include<stdio.h>
#include<string.h>
main()
{
	int a, b, c;
	char as[]="ab", bs[]="bb", cs[]="ab";
	a = strcmp(as, bs);
	printf("as and bs =%d", a);
	b = strcmp(bs, as);
	printf("\nbs and as = %d", b);
	c = strcmp(as, cs);
	printf("\nas and cs = %d", c);
}
