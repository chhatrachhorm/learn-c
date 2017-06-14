/*------------------
This program was written on Dec 15, 2016
-Used to learn about gets and puts
-Accept two string input and display two string output
--------------------*/

#include <stdio.h>

main(){
	char name[21], address[31];

	puts("Enter your name [Max: 20]: ");
	fflush(stdin);
	gets(name);
	puts("Enter your address [Max: 30]: ");
	fflush(stdin);
	gets(address);
	puts("Your name is: ");
	puts(name);
	puts("Your address is: ");
	puts(address);

}
