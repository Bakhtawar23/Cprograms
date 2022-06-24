void main()
{
	int a;
	printf("Value of a:");
	scanf("%d",&a);
	int b;
	printf("Value of b:");
	scanf("%d",&b);
	int c;
	printf("Value of c:");
	scanf("%d",&c);
	if (a>b&&a>c)
	{
		printf("a is greater");
	}
	else if (b>a&&b>c)
	{
		printf("b is greater");
	}
	else
	{
		printf("c is greater");
	}
}