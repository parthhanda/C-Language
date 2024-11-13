#include<stdio.h>
#include<conio.h>
void main()
{
	int a=20,b=30,*p1=&a,*p2=&b;
	int c,*p3=&c;
	*p3=*p1+*p2;
	printf("Sum is %d",*p3);  
}