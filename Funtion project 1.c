#include<stdio.h>
#include<conio.h>
int sum(int,int);
void  area(int);
void main()
{
	int d;
	int e;
	int g;
	scanf("%d",&e);
	scanf("%d",&g);
	d=sum( e, g);
	area(d);
}
int sum(int e,int g)
{
	int a=e;
	int b=g;
	int c=a+b;
	return c;
}
void area(int d)
{
	printf("Area of circle is ");
	int x= 3.14*d*d;
	printf("%d",x);
}
