void main()
{
	int x,v,d,pal=0;
	printf("Enter any 3 digit number:");
	scanf("%d",&x);
	v=x;
	while(x!=0)
	{
		d=x%10;
		x=x/10;
		pal=(pal*10)+d;
	}
	printf("%d",pal);
	if(pal==v)
	{
		printf("Number is palindrome");
	}
	else
	{
		printf("Number is not palindrome");
	}
}