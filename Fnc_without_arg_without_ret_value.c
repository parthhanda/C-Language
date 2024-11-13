#include<stdio.h>

void sum();

void name()
{
    printf("My name is Parth.\n");
}

void main()
{
    printf("What is your name ?\n");
    name();
    sum();
}

void sum()
{
    int a, b, sum=0;
    printf("Enter two numbers-> \n");
    scanf("%d",&a);
    scanf("%d",&b);
    sum = a + b;
    printf("Sum = %d\n",sum);
}