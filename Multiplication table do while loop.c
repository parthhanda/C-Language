#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0;
	int x;
	int a;
	printf("Enter a Number: ");
	scanf("%d",&x);
	do
	{
		a=x*i;
		printf("\n%d into %d is equal to %d",x,i,a);	
		i++;
	}
	while(i<=10);
}
