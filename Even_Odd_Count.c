#include <stdio.h>
int main() {
    int num,cE=0,cO=0,d;
    scanf("%d",&num);
    while(num!=0)
    {
        d=num%10;
        if(d%2==0)
            cE++;
        else
            cO++;        
        num=num/10;
            
    }
    printf("%d\n%d",cE,cO);
    return 0;
}
