/*---------
This program was written on Dec 15, 2016
- Used to learn about gets and puts
- Accept a name
- Display a message with a name
-----------*/

#include <stdio.h>

main(){

	char name[25];

	puts("Enter your name [Max: 25]: ");
	fflush(stdin);
	gets(name);
	puts("Hello. How are you?");
	puts(name);
}
