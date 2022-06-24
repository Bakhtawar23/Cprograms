void main()
{
int x;
printf("Pick any number from 1 to 4:");
scanf("%d",&x);
switch(x)
{
	case 1:
		printf("Colour is red");
		break;
	case 2:
	    printf("Colour is green");
	    break;
	case 3:
	    printf("Colour is black");
		break;
	case 4:
	    printf("Colour is blue");
		break;
	default:
	    printf("Error: Enter number from 1 to 4");				
}
}