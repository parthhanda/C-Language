#include<stdio.h>
#include<conio.h>
// Printing the size of all datatypes.
int main()
{
    int a = 1;
    printf("Size of int is %d Bytes.",sizeof(a));

    short int b = 2;
    printf("\nSize of short int is %hd Bytes.",sizeof(b));

    unsigned short int c = 3;
    printf("\nSize of unsigned short int is %hu Bytes.",sizeof(c));

    long int d = 4;
    printf("\nSize of long int is %ld Bytes.",sizeof(d));

    unsigned long int e = 4;
    printf("\nSize of unsigned long int is %lu Bytes.",sizeof(e));

    long long int f = 5;
    printf("\nSize of long long int is %d Bytes.",sizeof(f));

    char g = a;
    printf("\nSize of char is %d Bytes.",sizeof(g));

    float h = 12;
    printf("\nSize of float is %d Bytes.",sizeof(h));

    double i = a;
    printf("\nSize of double is %d Bytes.",sizeof(i));

    unsigned int j = 1;
    printf("\nSize of unsigned int is %d Bytes.",sizeof(j));

    return 0;
}
