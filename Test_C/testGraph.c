#include<stdio.h>
#include<graphics.h>
main()
{
	int driver, mode, i;
	driver = CGA;
	mode = CGAC3;
	initgraph(&driver, &mode, " ");
	setcolor(3);
	for(i=25; i<150; i+=25)
	circle(50, 50, i);
	resstorecrtmode();
}
