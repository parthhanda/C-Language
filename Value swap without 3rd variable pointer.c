#include<stdio.h>
#include<conio.h>
void main()
{
	int a=20,b=30,*p1=&a,*p2=&b;
	printf("Before swap: *p1=%d *p2=%d",*p1,*p2);  
	*p1=*p1+*p2;  
	*p2=*p1-*p2;  
	*p1=*p1-*p2;  
	printf("\nAfter swap: *p1=%d *p2=%d",*p1,*p2);  
}
