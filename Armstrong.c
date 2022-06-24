void main()
{
	int x,v,d,sum=0;
	printf("Enter any number:");
	scanf("%d",&x);
	v=x;
	while(x!=0)
	{
		d=x%10;
		x=x/10;
		d=d*d*d;
		sum=sum+d;
		
	}
	printf("%d",sum);
	if(sum==v)
	{
		printf("It is an Armstrong number");
	}
	else
	{
		printf("It is not an Armstrong number");
	}
}