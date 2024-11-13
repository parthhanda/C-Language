#include<stdio.h>

int main()
{
    int i = 0,n,sum = 0;
    printf("Enter a number -> ");
    scanf("%d",&n);
    while (i<=n)
    {
        sum = sum + i;
        i = i + 1;
    }
    printf("%d",sum);

}