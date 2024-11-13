#include <stdio.h>
#include <conio.h>

int main()
{
    // To print all natural numbers using while.
    int i = 1, n;

    printf("Enter the number -> ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d\n", i);
        i = i + 1;
    }

    // // To print all natural numbers in reverse.

    // int i = 1,n;

    // printf("Enter the number -> ");
    // scanf("%d",&n);

    // while(i<=n)
    // {
    //     printf("%d\n",n);
    //     n = n - 1;
    // }
}