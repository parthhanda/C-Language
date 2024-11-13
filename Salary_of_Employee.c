#include<stdio.h>
#include<conio.h>

int main()
{
    int bs,ts,hra,dr;

    printf("Enter your salary -> ");
    scanf("%d",&bs);

    if(bs <= 9999)
    {
        hra=bs*0;
        dr=bs*0.05;
    }
    else if(10000<=bs<=20999)
    {
        hra=bs*0.05;
        dr=bs*0.08;
    }
    else if(21000<=bs<=30999)
    {
        hra=bs*0.08;
        dr=bs*0.1;
    }
    else if(bs>=31000)
    {
        hra=bs*0.1;
        dr=bs*0.15;
    }

    ts=bs+hra+dr;

    printf("Your total slary is -> %d",ts);

    return 0;
}