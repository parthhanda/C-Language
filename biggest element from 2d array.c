#include<stdio.h>
#include<conio.h>
void main()
{
	int i; 
	int y;
	int a[2][3]={{2,3,1},{4,1,2}};
	int big=a[0][0];
	for(i=0;i<=1;i++)
	{
		for(y=0;y<=2;y++)
		{
		  if(big<a[i][y])
		  {
		  	big=a[i][y];
		  }
		}
	}
	printf("%d",big);
}
