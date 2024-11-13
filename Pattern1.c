#include<stdio.h>
#include<conio.h>
int main()
{
    // // A
    // // AB
    // // ABC
    // // ABCD
    // int i;
    // int n;
    // printf("Enter the number of rows -> "); 
    // scanf("%d",&n);
    // int j;
	// for(i=1;i<=n;i++)
	// {
	// 	for(j=1;j<=i;j++)
	// 	{
	// 		printf("%c",64+j);
			
	// 	}
	// 	printf("\n");
	// }


    // // *
    // // **
    // // ***
    // // ****
    // int i;
    // int n;
    // printf("Enter the number of rows -> "); 
    // scanf("%d",&n);
    // int j;
	// for(i=1;i<=n;i++)
	// {
	// 	for(j=1;j<=i;j++)
	// 	{
	// 		printf("*");
			
	// 	}
	// 	printf("\n");
	// }

    int i;
	int j;
	int x;
	int y;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3-i;j++)
		{
			printf(" ");
		}
		for(y=1;y<=i+i-1;y++)
		{
			printf("*");
		}
		printf("\n");
	}
}