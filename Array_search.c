#include <stdio.h>
int main()
{
    int arr[5];
    int num,i;
    scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5]);
    scanf("%d",&num);
    for(int i=0;i<5;i++)
    {
        if(arr[i] == num)
        {
            printf("%d",i+1);
            break;
        }
    }
    if( i == 5)
    {
        printf("-1");
    }
    return 0;
}