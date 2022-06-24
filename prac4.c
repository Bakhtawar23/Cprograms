void main()
{
	int n,i,x=0;
	printf("Factors of number are:");
	scanf("%d",&n);
	for(i=1; i>0; i++)
	{
		if(n%i==0)
		{
			x=x+i;
			printf("%d\n",i);
		}
		
	}
	printf("Addition of factors is %d",x);
	
}