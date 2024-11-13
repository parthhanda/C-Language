#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    printf("Enter a number - ");
    scanf("%d",&a);

    if(a/2)
    {
        printf("Even Number.");
    }
    else
    {
        printf("Odd Number.");
    }

    // // Even Numbers Using While Loop.

    // int i = 2,n;
    // printf("Enter the limit -> ");
    // scanf("%d",&n);

    // while(i<=n)
    // {
    //     printf("%d\n",i);
    //     i = i + 2;
    // }

    // // Odd Numbers Using While Loop.

    // int i = 1,n;
    // printf("Enter the limit -> ");
    // scanf("%d",&n);

    // while(i<=n)
    // {
    //     printf("%d\n",i);
    //     i = i + 2;
    // }
}