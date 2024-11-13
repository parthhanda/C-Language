#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	int j;
	int x;
	int y;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3-i;j++)
		{
			printf(" ");
		}
		for(y=1;y<=i+i-1;y++)
		{
			printf("*");
		}
		printf("\n");
	}
}
