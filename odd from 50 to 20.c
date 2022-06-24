void main()
{
	int a;
	int n1;
	printf("Enter value of n1");
	scanf("%d",&n1);
	int n2;
	printf("Enter value of n2");
	scanf("%d",&n2);
	for(a=n1; a>n2; a--)
	{
		if(a%2!=0)
		printf("%d\n",a);
	}
}