#include<stdio.h>
#include<conio.h>
// To display the greatest digit in a number.  
int main()
{
    int num,max = 0,rem = 0;

    printf("Enter a number -> ");
    scanf(" %d",&num);

    if(num>0)
    {
        rem = num % 10;

        if(rem>max)
        {
            max = rem; 
        }

        num = num / 10;
    }

    printf("Maximum digit is -> %d",max);
    return 0;

}