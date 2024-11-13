#include<stdio.h>
#include<conio.h>
void main()
{
	int r;
	int c;
	int i;
	int j;
	int k;
	printf("Enter how many rows you want: ");
	scanf("%d",&r);
	printf("Enter how many coloumns you want: ");
	scanf("%d",&c);
	int a[r][c];
	int b[r][c];
	int mul[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the values of first array: ");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the values of second array: ");
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			mul[i][j];
			for(k=0;k<c;k++)
			{
				mul[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %d\t",mul[i][j]);
		}
	printf("\n");
	}
}
