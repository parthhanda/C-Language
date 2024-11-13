#include <stdio.h>
int main()
{
    char str[50];
    scanf("%s",str);
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] += 32;
        }
        else
        {
            str[i] -= 32;
        }
        i++;
    }
    printf("%s",str);
    return 0;
}