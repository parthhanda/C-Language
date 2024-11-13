#include<stdio.h>
#include<conio.h>
void main()
{
	int i; 
	int y;
	int sum=0;
	int a[2][3]={{2,3,1},{4,1,2}};
	for(i=0;i<=1;i++)
	{
		for(y=0;y<=2;y++)
		{
		sum=sum+a[i][y]	;
		}
		printf("%d",sum);
	}
}
