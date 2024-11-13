#include<stdio.h>
#include<conio.h>

int main()
{
    int age;

    printf("Enter your Age -> ");
    scanf("%d",&age);

    if(age >= 18)
    {
        printf("You are ELIGIBLE  for voting.");
    }
    else
    {
        printf("You are NOt ELIGIBLE for voting.");
    }
}