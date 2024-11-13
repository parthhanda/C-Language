#include <stdio.h>

void sum()
{
    int a, b, sum=0;
    printf("Enter two numbers-> \n");
    scanf("%d",&a);
    scanf("%d",&b);
    sum = a + b;
    printf("Sum = %d\n",sum);

}
int main()
{
    sum();
    printf("This is a simple example of function.\n");
    sum();
    return 0;
}