#include <stdio.h>
int main()
{
    int r,col;

    printf("Enter the rows of the matrix -> ");
    scanf("%d",&r);

    printf("Enter the columns of the matrix -> ");
    scanf("%d",&col);

    int a[r][col],b[r][col],c[r][col],sum;
     
    printf("Enter the first matrix ->\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The first matrix is ->\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the second matrix ->\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("The second matrix is ->\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    printf("Sum ->\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<col;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}