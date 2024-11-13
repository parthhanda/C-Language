#include<stdio.h>
#include<conio.h>
int sum(int,int);

void main()
{
	int d;
	int e;
	int g;
	scanf("%d",&e);
	scanf("%d",&g);
	d=sum( e, g);
	printf("%d",d);
}
int sum(int e,int g)
{
	int a=e;
	int b=g;
	int c=a+b;
	return c;
}
