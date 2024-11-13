#include<stdio.h>
int main()
{
    int i,n,arr[5],large,small,diff;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    large=small=arr[0];
    for(i=0;i<5;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
        if(arr[i]<small)
        {
            small=arr[i];
        }
    }
    diff = large - small;
    printf("%d",diff);
    return 0;
}