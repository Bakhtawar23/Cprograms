void main()
{
	int n,a;
	printf("Enter any number:");
	scanf("%d",&n);
	for (a=2; a<n; a++)
	{
		if (n%a==0)
		{
			printf("Number is composite");
			break;
		}
	}
		if (a==n)
		{
			printf("Number is prime number");
			
		}
}