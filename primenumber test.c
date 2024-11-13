#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
			printf("Its not a prime number");
			break;
		}
		printf("Its a prime number");
		break;
	}
	
}

