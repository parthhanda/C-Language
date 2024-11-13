#include <stdio.h>
int main()
{
    int r,c;

    printf("Rows -> \n");
    scanf("%d",&r);
    printf("Columns -> \n");
    scanf("%d",&c);

    int a[r][c];
    int b[r][c];
    int mul[r][c];

    // Taking and printing first matrix.
    for(int i = 0;i<r;i++)
    {
        for(int j = 0;j<c;j++)
        {
            printf("Enter first matrix -> ");
            scanf("%d",&a[i][j]);
        }
    }
    printf("First matrix -> \n");
     for(int i = 0;i<r;i++)
    {
        for(int j = 0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    // Taking and printing second matrix.
    for(int i = 0;i<r;i++)
    {
        for(int j = 0;j<c;j++)
        {
            printf("Enter Second matrix -> \n");
            scanf("%d",&b[i][j]);
        }
    }
    printf("Second matrix -> \n");
     for(int i = 0;i<r;i++)
    {
        for(int j = 0;j<c;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    // Multiplication.
    for(int i = 0;i<r;i++)
    {
        for(int j = 0;j<c;j++)
        {
           mul[i][j] = 0;
           for(int k = 0;k<c;k++)
           {
            mul[i][j]+=a[i][k]*b[k][j];
           }
        }
    }
    printf("Multiplied matrix -> \n");
     for(int i = 0;i<r;i++)
    {
        for(int j = 0;j<c;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}