void main()
{
	int x,r=1;
	printf("Enter any number:");
	scanf("%d",&x);
	for( ;x>0;x--)
	{
		r=r*x;
	}
	printf("%d",r);
}