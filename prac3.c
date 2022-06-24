#include <stdio.h>
void main()
{
	int x;
	printf("Enter case number between 1 to 5:1)Length of string\n2)Copy a string\n3)Compare a string\n4)Concat a string\n5)Reverse a string\n6)Palindrome");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			{
				char a[20];
				printf("Enter any word:");
				scanf("%s",a);
				int s=strlen(a);
				printf("%d",s);
				break;
			}
		case 2:
		    {
		    	char a[20],b[20];
		    	printf("Enter any word:");
		    	scanf("%s",a);
		    	strcpy(b,a);
		    	printf("%s",b);
		    	break;
			}	
		case 3:
		    {
		    	char a[20];
		    	printf("Enter city name:");
		    	scanf("%s",a);
		    	char b[20];
		    	printf("Enter city name:");
		    	scanf("%s",b);
		    	strcmp(a,b);
		    	int c=strcmp(a,b);
		    	printf("%d",c);
		    	if(c>0)
		    	{
		    		printf("a is greater than b");
		    		
				}
				else if(c<0)
				{
					printf("b is greater than a");
					
				}
				else
				{
					printf("a and b are equal");
				}
				break;
			}
		case 4:
		    {
		    	char a[20];
		    	printf("Enter word 1:");
		    	scanf("%s",a);
		    	char b[20];
		    	printf("Enter word 2:");
		    	scanf("%s",b);
		    	strcat(a,b);
		    	printf("%s",a);
		    	break;
			}
		case 5:
		    {
		    	char a[20];
		    	printf("Enter any word:");
		    	scanf("%s",a);
		    	strrev(a);
		    	printf("%s",a);
		    	break;
		    	
			}
		case 6:
		    {
		    	char a[20];
		    	printf("Enter any word:");
		    	scanf("%s",a);
		    	char b[20];
		    	strcpy(b,a);
		    	strrev(a);
		    	int x=strcmp(a,b);
		    	if(x==0)
		    	{
		    		printf("String is palindrome");
				}
				else 
				{
					printf("String is not palindrome");
				}
			}			
				
	}
}