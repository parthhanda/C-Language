#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	int a[5]={1,32,3,54,65};
	int big=a[0];
	for(i=1;i<=4;i++)
	{
		if(big<a[i])
		{
			big=a[i];
		}
	}
	printf("%d",big);
}
