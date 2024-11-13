#include<stdio.h>
#include<conio.h>
int sum(int);
int main()
{
	int n=5;
	int f = sum(n);
	printf("%d",f);
	return 0;
}
int sum(int n)
{
	if(n==1)
		return n;
	else
		return n  + sum(n-1);
		
}
