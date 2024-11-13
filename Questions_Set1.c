#include<stdio.h>
#include<conio.h>

int main()
{
    // int a,b,sum;

    // printf("Enter first number =\n");
    // scanf("%d",&a);

    // printf("Enter second number =\n");
    // scanf("%d",&b);

    // sum = a + b;
    // printf("Sum of both numbers is = %d",sum);
    
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
		printf("\nA+");
	}
	else if(c>=60)
	{
		printf("\nA");
	}
	else if(c>=40)
	{
		printf("\nC");
	}
	else
	{
		printf("\n");
	}
	
}
}