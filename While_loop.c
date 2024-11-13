#include<stdio.h>
void main()
{
    int n;
    int i = 1;
    printf("Enter number -> ");
    scanf("%d",&n);

    while (i<=n)
    {
        printf("%d\n",i);
        i = i + 1;
    }
    
}