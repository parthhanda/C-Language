#include <stdio.h>
int main() {
    int num,d,flag=0;
    scanf("%d",&num);
    while(num!=0)
    {
        d=num%10;
        if(d==9 || d==8 || d==0)
            {
            printf("Invalid number");
            break;
            }
        num=num/10;
    }
    
    if(d==1)
        printf("Monday");
    else if(d==2)
        printf("Tuesday");
    else if(d==3)
        printf("Wednesday");
    else if(d==4)
        printf("Thursday");
    else if(d==5)
        printf("Friday");
    else if(d==6)
        printf("Saturday");
    else if(d==7)
        printf("Sunday");
    return 0;
}
