#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	for(i=0;i<=100;i++)
	{
		if(i%5==0 && i%3==0)
		{
			continue;
		}
		printf("\n%d",i);
	}
}

