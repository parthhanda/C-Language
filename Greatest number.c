#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	int y;
	int z;
	printf("Enter first number: ");
	scanf("%d",&x);
	printf("Enter second number: ");
	scanf("%d",&y);
	printf("Enter third number: ");
	scanf("%d",&z);	
	if ((x>y)&&(x>z))
	{
		printf("X is greatest number");
	}
    else if ((y>x)&&(y>z))
	{
		printf("Y is greatest number");
	}	
	else
	{
		printf("Z is greatest number");
	}	
}
