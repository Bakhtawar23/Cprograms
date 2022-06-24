int swap(int *pa,int *pb);
void main()
{
	int a=30;
	int b=40;
	swap(&a,&b);
	printf("%d %d",a,b);
}
int swap(int *pa,int *pb)
{
	int c,*p;
	c=*pa;
	*pa=*pb;
	*pb=c;
}