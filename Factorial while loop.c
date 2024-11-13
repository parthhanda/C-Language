#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1;
	int x;
	int fact;
	printf("Enter a Nummber: ");
	scanf("%d",&x);
	while (i<=x)
	{
		fact= fact*i;
		i++;
	}
	printf("%d is factorial of %d",fact,x);
}
