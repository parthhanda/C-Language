#include<stdio.h>
#include<conio.h>

int main()
{
    int n1,n2;
    char x;

    printf("Enter first number -> ");
    scanf("%d",&n1);

    printf("Enter first number -> ");
    scanf("%d",&n2);

    printf("Enter the operator(+,-,*,/) -> ");
    scanf(" %c",&x);

    switch(x)
    {
        case '+':
            printf("The Additon of %d and %d is %d.",n1,n2,n1+n2);
            break;

        case '-':
            printf("The Substraction of %d and %d is %d.",n1,n2,n1-n2);
            break;

        case '*':
            printf("The Multiplication of %d and %d is %d.",n1,n2,n1*n2);
            break;

        case '/':
            printf("The Division of %d and %d is %d.",n1,n2,n1/n2);
            break;

        default:
            printf("INVALID OPERATOR !!");
    }
}