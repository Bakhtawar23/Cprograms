void main()
{
	int a=249,d,sum=0;
	while (a!=0)
	{
		d=a%10;
		a=a/10;
		sum=sum+d;
	}
	printf("%d",sum);
}