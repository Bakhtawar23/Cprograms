void main()
{
	char x;
	printf("Enter initial letter from a to d or A to D:");
	scanf("%c",&x);
	switch(x)
	{
		case 'a':
		case 'A':
			printf("Ahmedabad");
			break;
		case 'b':
		case 'B':
		    printf("Banglore");
			break;
		case 'c':
		case 'C':
		    printf("Chennai");
			break;
		case 'd':
		case 'D':
		    printf("Delhi");
			break;
		default:
		    printf("Error: type only letter between a and d or A and D" );				
		      	
	}
}