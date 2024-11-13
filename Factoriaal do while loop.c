#include<stdio.h>
#include<conio.h>
void main()
{ 
int i=1;
int x;
int fact;
printf("Enter a Number: ");
scanf("%d",&x);
do
{
	fact=fact*i;
	i++;
}
while(i<=x);
printf("%d is Factorial of %d",x,fact);
}

