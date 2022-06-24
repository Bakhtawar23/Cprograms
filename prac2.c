void main()
{
	int a[20],i,n,b[20];
	printf("Enter number of array elements:");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	int j=0;
	for(i=n-1; i>=0; i--)
	{
		b[j]=a[i];
		j++;
	}
	for(i=0; i<n; i++)
	{
		printf("%d ",b[i]);
	}
}