#include<stdio.h>

void check(int);

void printstar(int a) // Here ' void ' is used because it has no return value.
{
    for(int i = 0;i<a;i++)
    {
        printf("*\n");
    }
}

int main()
{
    printstar(5); // Fnc. is called by passing a parameter.
    int x;
    printf("Enetr a no. ->\n");
    scanf("%d",&x);
    check(x);
    return 0;
}

void check(int x)
{
    if(x%2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}