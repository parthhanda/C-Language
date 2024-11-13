#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	printf("Enter the temperature: ");
	scanf("%d",&x);
	if(x<=0)
	{
		printf("Freezing weather");
	}
	else if(x<=10)
	{
		printf("Very cold weather");
	}
	else if(x<=20)
	{
		printf("Cold weather");
	}
	else if(x<=30)
	{
		printf("Normal in Temp");
	}
	else if(x<=40)
	{
		printf("Hot weather");
	}
	else
	{
		printf("Very hot weather");
	}
}
