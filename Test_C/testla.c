main()
{
	int *j;
	int a[]={1, 2, 3, 4};
	j = a;
	printf("j= %d", j);

	printf("j= %d", j+1);	printf("\nj=%d", j);
	printf("\n&j=%d", &j );
	j = j + 1;
	printf("\nj= %d", j);
	printf("\n*j=%d", *j);
	printf("\n&j=%d", &j );
	int b[]={5, 4, 3, 2, 1};
	printf("\nb1 = %d", *b);
	printf("\n&b1 = %d", b);
	b+1;
	printf("\nb1 = %d", *b);
	printf("\n&b1 = %d", b);
}


