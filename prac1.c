void series();
void niven(int num);
int factors(int num);
#include <stdio.h>
void main()
{
	int x,num,c;
	printf("Enter any number from 1 to 3:1)Series\n2)Niven number\n3)Factors\n");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			series();
			break;
		case 2:
		    niven(num);
			break;
		case 3:
		    {
		    	int c=factors(num);
		    	printf("Addition of factors is:%d",c);
		    	break;
			}	
	}
}
void series()
{
	int a,d,sum=0;
	for(a=1;a<=10;a++)
	{
		d=a*a;
		if(a%2==0)
		{
			sum=sum-d;
		}
		else
		{
			sum=sum+d;
		}
	}
	printf("%d",sum);
}
void niven(int num)
{
	int p,q,sum=0,v;
	printf("Enter 3 digit number:");
	scanf("%d",&p);
	v=p;
	while(p!=0)
	{
		q=p%10;
		p=p/10;
		sum=sum+q;
	}
	printf("%d",sum);
	if(v%sum==0)
	{
		printf("Number is niven number");
	}
	else
	{
		printf("Number is not a niven number");
	}
}
int factors(int num)
{
	int m,i,c=0;
	printf("Enter any positive integer:");
	scanf("%d",&m);
	printf("Factors of %d are:\n",m);
	for(i=1;i<=m;i++)
	{
		if(m%i==0)
		{
			c=c+i;
			printf("%d\n",i);
		}
		
	}
	return c;
}		