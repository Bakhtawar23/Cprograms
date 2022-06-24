void main()
{
	int x,y;
	printf("Enter any number:");
	scanf("%d",&x);
	for(y=50;y>x;y--)
	{
		if(y%2!=0)
		printf("%d\n",y);
	}
}