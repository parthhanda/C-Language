#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5]={12,5,3,68,12};
	int sum=arr[0];
	int flag=0;
	if(sum==arr[4])
	{
		flag=1;
	}
	if(flag==1)
	{
		printf("Its same");
	}
	else
	{
		printf("Not same");
	}
}
