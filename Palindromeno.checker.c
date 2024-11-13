#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	int r;
	int temp;
	int sum;
	printf("Enter a number: ");
	scanf("%d",n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(sum==temp)
	{
		printf("Its a Palindrome number");
	}
	else
	{
		printd("Its not a palindrome number");
	}
}
