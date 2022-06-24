void main()
{
	int x;
	printf("Your age is:");
	scanf("%d",&x);
	char v;
	printf("Fully vaccinated:");
	getchar();
	scanf("%c",&v);
	if (x>18)
	{
		if(v=='Y')
		{
			printf("Allowed to travel: age above limit and fully vaccinated");
		}
		else
		{
			printf("error:type in capital Y or N as an answer for fully vaccinated question");
		}
	}
	else if (x<18&&v=='N')
	{
		printf("Not allowed to travel: age below limit and not fully vaccinated");
	}
	else if (x>18&&v=='N')
	{
		printf("Not allowed to travel: not fully vaccinated");
	}
	else if (x<18&&v=='Y')
	{
		printf("Not allowed to travel: age below 18");
	}
	else
	{
		printf("error:type in capital Y or N as an answer to fully vaccinated question");
	}
}