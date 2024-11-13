#include<stdio.h>

int main()
{
    int n,m,sum = 0;
    printf("Enter the number -> ");
    scanf("%d",&n);
    int temp = n;
    while(temp>0)
    {
        m = temp % 10;
        sum = (m*m*m) + sum;
        temp = temp / 10;
    }
    if(sum==n)
    {
        printf("Its an armstrong number.");
    }
    else
    {
        printf("Its not an armstrong number.");
    }
}