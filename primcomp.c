void main()
{
	int x,i;
	printf("Enter any number:");
	scanf("%d",&x);
    for(i=2;i<x;i++)
    {
    	if(x%i==0)
    	{
    		printf("Number is composite");
    		break;
		}
	}
	if(i==x)
	{
		printf("Number is prime");
	}
	
}