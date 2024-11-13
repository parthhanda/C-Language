#include<stdio.h>
int main()
{
    int n1,n2,i,s=0;
    scanf("%d",&n1);
    scanf("%d",&n2);
    for(i=n1+1;i<n2;i++)
    {
        s = s + i;
    }
    printf("%d",s);
    return 0;
}