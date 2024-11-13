#include <stdio.h>
int main()
{ 
inta,b,c,sum=0;
scanf("%d%d%d", &a,&b,&c);
if(a>b && a>c)
    {
sum=sum+a;
if(b>c)
sum=sum+b;
else
sum=sum+c;
    }
else if (b>a &&b>c)
    {
sum=sum+b;
if (a>c)
sum=sum+a;

else
sum=sum+c;
    }
else
    {
sum=sum+c;
if(a>b)
sum=sum+a;
else
sum=sum+b;
    }
printf("%d",sum);
return 0;
}
