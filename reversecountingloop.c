#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	int x;
	scanf("%d,",&x);
	for(i=1;i<=10;i++)
	{
		int a=(i*x);
		printf("%d * %d = %d\n",x,i,a);
	}
}
