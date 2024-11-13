#include <stdio.h>

int main()
{
    // int a = 22;
    // int *ptr = &a;

    // printf("The value of a is %d.\n", a);
    // printf("The address of a is %p.\n", &a);

    // printf("\nThe value of 'a' through pointer variable is %d.\n", *ptr); // The " * " pointer takes the value.
    // printf("The address of 'a' through pointer variable is %p.\n", ptr);  // %p is used to specify the address.

    // printf("\nThe address of pointer variable is %p.\n", &ptr); // " & " gives the address.



    // Pointer assignment.
    // int a = 10,b = 5;
    // int *p;
    // int *q;
    // p = &a;
    // q = &b;
    // *q = *p;    

    // printf("a = %d %d %d",a,*p,*q);


    
    // Pointer to pointer (Double Pointer)
    int a = 20;
    int *p = &a;
    int **q = &p;
    int ***r = &q;

    printf("a = %d %d %d\n",a,*p,**q,***r); 
    printf("Address of p = %x %x\n",&p,q); // 'q' stores the address of pointer 'p'.
    printf("Address of q = %x %x",&q,r); // 'r' stores the address of pointer 'q'.
    return 0;
}