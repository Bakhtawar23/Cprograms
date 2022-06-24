void main()
{
	int x,y,a,r=1;
	printf("Enter a number:");
	scanf("%d",&x);
	printf("Enter the power:");
	scanf("%d",&y);
	for (a=1; a<=y; a++)
	{
		r=r*x;	
	}
	{
		printf("Result:%d",r);
	}
}
