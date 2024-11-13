#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5]={2,3,5,7,8};
	int outarr[5];
	int i;
	for(i=0;i<=4;i++);
	{
		outarr[i]=arr[i]*arr[i];
	}
	printf("%d",outarr[2]);
}
