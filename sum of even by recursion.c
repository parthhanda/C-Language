#include<stdio.h>
#include<conio.h>
int sum(int);
void main()
{
	printf("%d",sum(10));
}
int sum(int  n)
{
 	if (n==0)
 		return 0;
 	else
 		if (n%2==0)
		 	return n + sum(n-1);
		else
			return sum(n-1);
}
