#include <stdio.h>
int main()
{
    int arr[50],n,i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
        if(arr[i]%2==0)
            {
                printf("%d\n",arr[i]);
                count++;
            }
    printf("%d",count);
}
