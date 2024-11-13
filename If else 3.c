#include<stdio.h>
#include<conio.h>
void main ()
{

	int x;
	printf("Enter Your Salary: ");
	scanf("%d",&x);
	if(x>20000)
	{
		printf("Your salary is: ");
		int d=(x*5)/100;
		printf("%d",x-d);
	}
	else
	{
		printf("Your salary is: ");
		printf("%d",x);
	}
}
