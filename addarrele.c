void add(int b[],int n);
void main()
{
	int a[5],i,n;
	printf("Enter number of array elements:");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	add(a,n);
	n++;
	for (i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
}
void add(int b[],int n)
{
	int i,a[5],pos,num;
	printf("Which array position to add:");
	scanf("%d",&pos);
	printf("Which number to add:");
	scanf("%d",&num);
	for (i=n; i>=pos; i--)
	{
		b[i]=b[i-1];
	}
    for (i=pos; i<n; i++)
	{
		b[pos]=num;
    }
}