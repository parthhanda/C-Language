#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	int z;
	int a;
	int b;
	printf("Input the Roll No.: ");
	scanf("%d",&x);
	printf("Input the Marks: ");
	scanf("%d%d%d",&z,&a,&b);
	printf("Roll no.=%d",x);
	printf("\nMarks are Chemistry=%d, Physics=%d Maths=%d:",z,a,b);
	int c=((z+a+b)/3);
	printf("\nTotal percentage=%d",c);
	if(c>=80)
	{
		printf("\nFirst division");
	}
	else if(c>=60)
	{
		printf("\nSecond division");
	}
	else if(c>=40)
	{
		printf("\nThird division");
	}
	else
	{
		printf("\nFourth division");
	}
	
}
