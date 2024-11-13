#include<stdio.h>
#include<conio.h>
void main()
{
	int i; 
	int y;
	int a[2][3]={{2,3,1},{4,1,2}};
	for(i=0;i<=1;i++)
	{
		for(y=0;y<=2;y++)
		{
			if(a[i][y]%2==0)
			{
				printf("\n%d",a[i][y]);
			}
		}
	}
}
