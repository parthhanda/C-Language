#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	int x;
	int y;
	for(i=1;i<=3;i++)
	{
		for(x=1;x<=3-i;x++)
		{
			printf(" ");
		}
		for(y=1;y<=i;y++)
		{
			printf("*");
		}
		printf("\n");
	}
}
