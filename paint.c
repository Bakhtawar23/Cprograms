void main()
{
	int t;
	printf("Enter no. of interior walls:");
	scanf("%d",&t);
	int e;
	printf("Enter no. of exterior walls:");
	scanf("%d",&e);
	int s1=12.3;
	int s2=15.2;
	int sum1=0;
	int i;
	for(i=0;i<=3;i++)
	{
		sum1=s1*i;
	}
	int ic=18;
	int q=ic*sum1;
	
	int sum2=0;
	for(i=0;i<=3;i++)
	{
		sum2=s2*i;
	}
	int w=ic*sum2;
	int s3=10.10;
	int o=s3*12*3;
	int l=o+q+w;
	printf("Total estimation %d",l);
	
	
}