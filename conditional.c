void main()
{
int a,b,c;
printf("Value of a:\nValue of b:\nValue of c:");
scanf("%d %d %d",&a,&b,&c);
(a<b&&a<c)?printf("a is smaller"):(b<c)?printf("b is smaller"):printf("c is smaller");
}