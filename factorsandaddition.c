void main()
{
	int n,a,x=0;
	printf("Enter positive integer:");
	scanf("%d",&n);
	printf("Factors of %d are:\n",n);
	for(a=1; a<=n; a++)
	{
		if (n%a==0)
		{
			printf("%d\n",a);
			x=x+a;
		}
	
	}

	  	printf("Addition of factors:%d",x);
}