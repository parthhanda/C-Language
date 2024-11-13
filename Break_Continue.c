#include<stdio.h>
void main()
{
    int i,age;
    
    for(i=0;i<5;i++)
    {
        printf("Enter your age -> ");
        scanf("%d",&age);
        if(age>=5)
        {
            break;
        }
    }

    printf("\nYour age is greater than 5.");
}