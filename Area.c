void main()
{
	int x;
	printf("Enter case number:1)Area of a circle:\n2)Area of a recctangle:\n3)Area of a square:\n4)Area of a cone:");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			{
				int r;
				printf("Enter radius:");
				scanf("%d",&r);
				printf("Area of circle is:%f",3.14*r*r);
				break;
			}
		case 2:
		    {
		    	float l;
		    	printf("Enter length:");
		    	scanf("%f",&l);
		    	float b;
		    	printf("Enter breadth:");
		    	scanf("%f",&b);
		    	printf("Area of rectangle is:%f",l*b);
		    	break;
			}	
		case 3:
		    {
		    	int a;
		    	printf("Enter side:");
		    	scanf("%d",&a);
		    	printf("Area of square is:%d",a*a);
		    	break;
			}
		case 4:
			{
				int r;
				printf("Enter radius:");
				scanf("%d",&r);
				int h;
				printf("Enter height");
				scanf("%d",&h);
				printf("Area of cone is:%f",3.14*r*h);
				break;
			}
		default:
		    printf("Error: Enter case number from 1 to 4.");
							
	}
}