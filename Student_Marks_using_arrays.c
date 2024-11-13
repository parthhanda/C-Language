#include <stdio.h>
int main()
{
    int marks[5];
    float sum = 0;
    float avg = 0;

    for(int i = 0;i<5;i++)
    {
        printf("Enter the marks in %d subject ->",i);
        scanf("%d",&marks[i]);
    }
    for(int i = 0;i<5;i++)
    {
        printf("Marks of the student in %d subject - %d\n",i,marks[i]);
    }

    for(int i = 0;i<5;i++)
    {
        sum = sum + marks[i];
        
    }
    printf("Sum = %.2f\n",sum);

    avg = sum/5;
    printf("Average = %.2f",avg);
    return 0;
}