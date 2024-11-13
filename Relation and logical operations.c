#include<stdio.h>
#include<conio.h>
void main()
{
	int a=45;
	int b=13;
	int c=9;
	// This program is for relational operator
	printf("%d",a>b);
	printf("\n%d",a<b);
	printf("\n%d",a<=b);
	printf("\n%d",a>=b);	
	printf("\n%d",a==b);
	printf("\n%d",a!=b);
	printf("\n%d",(a>b)&&(a>c));
	printf("\n%d",(a>b)||(a>c));
	printf("\n%d",!(a>c));

}
