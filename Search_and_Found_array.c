#include<stdio.h>
int main()
{
    int i,a[10],n,count = 0;

    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        if(n == a[i])
        {
            count++;
        }
    }
    if(count == 0)
    {
        printf("%dNot found",n);
    }
    else
    {
        printf("found %d times.",count);
    }
}
