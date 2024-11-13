#include<stdio.h>
#include<conio.h>
int sum();
void main()
{
	int d;
	d=sum();
	printf("%d",d);
}
int sum()
{
	int a=10;
	int b=30;
	int c=a+b;
	return c;
}
