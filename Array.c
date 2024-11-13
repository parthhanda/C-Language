#include <stdio.h>

int main()
{
    int a;

    printf("Enter the size of array -> ");
    scanf("%d", &a);

    int arr[a];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d elemnt of the array -> ",i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\nThe value of %d elemnt of the array is %d.",i,arr[i]);
    }
    return 0;
}