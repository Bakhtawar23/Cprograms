int series();
void niven(int num);
int factors(int num);
#include <stdio.h> 
void main()
{
 int x;
 printf("Enter any number from 1 to 3: 1)Series:\n2)Niven number:\n,3)Factors:\n");
 scanf("%d",&x);
 switch(x)
	{
		case 1:
			{
				series();
				break;
				
			}
		case 2:
		    {
		    	int num;
		    	niven(num);
		    	break;
			}
		case 3:
		    {
		    	int num;
				factors(num);
				break;
			}
			
	}
	int series();
	{
		int a,d,sum=0;
		for (a=1; a>=10; a++)
			{
				d=a*a;
				sum=1-d+((d+1)*(d+1));
			}
			printf("%d",sum);
	
	}
	void niven(int num)
	{
		int p,w,q,sum=0;
		    	printf("Enter 3 digit number: ");
		    	scanf("%d",p);
		    	while (p!=0)
				{
		    	q=p%10;
		    	w=q/10;
		    	sum=sum+q;
		        }
		        if (sum%9==0)
		        {
		        	printf("Number is niven number");
				}
				else
				{
					printf("Number is not niven number");
				}
		
	}
	int factors(int num)
	{
		int m,t,u=0;
		    	printf("Enter any positive integer:");
		    	scanf("%d",&m);
		    	printf("Factors of %d are:\n",m);
		    	for (t=1; t<=m; t++)
		    	{
		    		if (m%t==0)
		    		{
		    			printf("%d\n",t);
					}
				}
				printf("Number of factors %d are:",t);
		
	}
}
	     