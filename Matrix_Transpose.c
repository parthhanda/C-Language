#include <stdio.h>
void main()
{
    int mat[2][3];

    printf("Enter the matrix[2][3] elements ->\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Before transpose ->\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
           printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    printf("After transpose ->\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
           printf("%d\t",mat[j][i]);
        }
        printf("\n");
    }
}