void main()
{
	int x,i,a=0;
	printf("Enter any number:");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			a=a+i;
			printf("%d\n",i);
		}
	}
	printf("Addition of factors is:%d",a);
}