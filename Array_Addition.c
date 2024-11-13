#include <stdio.h>
void main()
{
    int arr1[5];
    int arr2[5];
    int sumarr[5];

    printf("Enter the element of 1st array ->\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("Enter the element of 2nd array ->\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr2[i]);
    }

    printf("The sum of two arrays is ->\n");
    for(int i=0;i<5;i++)
    {
        sumarr[i]=arr1[i]+arr2[i];
        printf("%d ",sumarr[i]);
    }

}