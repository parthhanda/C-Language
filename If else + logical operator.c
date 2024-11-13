#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	if((x%5==0)&&(x%3==0))
	{
		printf("Given number is OK");
	}
	else
	{
		printf("Given number is invalid");
	}
}
