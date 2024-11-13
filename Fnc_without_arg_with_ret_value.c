#include<stdio.h>

int sum()
{
    int a, b, sum=0;
    printf("Enter two numbers-> \n");
    scanf("%d",&a);
    scanf("%d",&b);
    sum = a + b;
    return sum;
}
int takenumber()
{
    int a;
    printf("enter a number -> ");
    scanf("%d",&a);
    return a;
}

int main()
{
    int c,s;
    c = takenumber();
    printf("The entered number is %d.\n",c);
    s = sum();
    printf("Sum = %d.",s);
    return 0;
}