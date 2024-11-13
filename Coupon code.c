#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	printf("Order Amount: ");
	scanf("%d",&x);
	if(x>159)
	{
		int a=(x*60)/100;
		if(a>120)
		{
			int t = x-120;
			printf("Final amount: ");
			printf("%d",t);
		}
		else
		{
			int b=120;
			printf("Final amount: ");
			printf("%d",(a-b));
		}
	}
	else
	{
		printf("Final amount: ");
		printf("%d",x);
		
	}
}
