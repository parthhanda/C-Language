#include <stdio.h>

int main()
{
    int n, x = 0, y = 1, z = 0;
    printf("Enter a number -> ");
    scanf("%d", &n);
    printf("The Fibonacci Series of %d is as follow -> \n", n);
    while (z <= n)
    {
        printf("%d\n", z);
        x = y;
        y = z;
        z = x + y;
    }
}