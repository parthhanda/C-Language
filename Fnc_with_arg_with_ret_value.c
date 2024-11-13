#include<stdio.h>

int sum(int a,int b) // Here int a and int b are arguments.
{
    return a + b;
}
int max(int a,int b)
{
    int m;
    if(a>b)
    {
        m = a;
    }
    else
    {
       m = b; 
    }
    return m;
}
int main()
{
    int a = 5,b = 1,c,m;
    c = sum(a,b); // Fnc. calling.
    printf("The sum is %d.\n",c);
    m = max(a,b);
    printf("%d is greater.",m);
    return 0;
}