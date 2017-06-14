int main()
{
	printf("Reverse string now: ");
	revs();
	return 0;
}
void revs()
{
	char c;
	scanf("%c", &c);
	if(c !='\n') 
	{
		revs();
		printf("%c", c);
	}
}
