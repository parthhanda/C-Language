#include <stdio.h>
int main()
{
    int r, c;

    printf("Enter the no. of rows -> ");
    scanf("%d", &r);

    printf("Enter the no. of coloumns -> ");
    scanf("%d", &c);

    int mat[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the elements -> ");
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}