#include<stdio.h>

void swap(int x,int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("After Swapping -> %d %d\n",x,y);
}

void main()
{
    int a,b;
    printf("Enter first  number -> ");
    scanf("%d",&a);
    printf("Enter second  number -> ");
    scanf("%d",&b);
    printf("Before Swapping -> %d %d\n",a,b);
    swap(a,b);
} 
