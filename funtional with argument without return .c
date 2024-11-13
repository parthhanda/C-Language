#include<stdio.h>
#include<conio.h>
void sum(int,int);
void main()
	{
		int x;
		int y;
		scanf("%d",&x);
		scanf("%d",&y);
		sum(x,y);
	
	}
void sum(int a,int b)
	{
	int c=a+b;
	printf("%d",c);
	}

