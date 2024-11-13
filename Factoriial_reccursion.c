#include<stdio.h>
#include<conio.h>
int fac(int);
int main()
{
	int n;
	printf("Enetr the number -> ");
	scanf("%d",&n);
	int f = fac(n);
	printf("%d",f);
	return 0;
}
int fac(int n)
{
	if(n==1)
		return 1;
	else
		return n  * fac(n-1);
		
}