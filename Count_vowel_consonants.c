#include <stdio.h>
int main()
{
    char a[50];
    int v=0;
    int c=0;
    int i=0;
    fgets(a,50,stdin);
    while(a[i]!='\0')
    {
        if( (a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z'))
        {
            if( a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
                {
                    v++;
                }
            else
                {
                    c++;
                }
            
        }
       
        i++;
    }
    printf("%d\n%d",v,c);

    return 0;
}