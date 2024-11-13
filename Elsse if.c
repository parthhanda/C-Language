#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	printf("Kitne paise hein: ");
	scanf("%d",&x);
	if(x<=10)
	{
		printf("You can eat Biscuits");
	}
	else if(x<=20)
	{
		printf("You can eat Lays");
	}
	else if(x<=40)
	{
		printf("You can eat Momos");
	}
	else if(x<=70)
	{
		printf("You can eat Burger");
	}
	else if(x<=100)
	{
		printf("You can eat Pizza");
	}
	else 
	{
		printf("You can eat Anything");
	}
}
