#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	int y;
	int i;
	int j;
	printf("Enter how many rows you want: ");
	scanf("%d",&x);
	printf("Enter how many coloumns you want: ");
	scanf("%d",&y);
	int arr[x][y];
	for(i=0;i<=x;i++)
	{
		for(j=0;j<=y;j++)
		{
			printf("Enter the values of array: ");
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<=x;i++)
	{
		for(j=0;j<=y;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}
