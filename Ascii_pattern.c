#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    int j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",64+j);
			
		}
		printf("\n");
	}
}
