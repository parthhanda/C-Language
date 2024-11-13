#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2][3]={{24,39,18},{43,19,26}};
	int b[2][3]={{32,51,12},{23,35,81}};
	int c[2][3];
	int i;
	int y;
	for(i=0;i<=1;i++)
	{
		for(y=0;y<=2;y++)
		{
			c[i][y] = a[i][y]+ b[i][y];
		}
	}
    printf("%d",c[0][0]);
}
