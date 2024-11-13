#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1;
	int x;
	int a;
	printf("Enter a Digit: ");
	scanf("%d",&x);
	while (i<=10)
	{
		int  a=x*i;
		printf("\n%d x %d = %d",x,i,a);
		i++;
	}
}
