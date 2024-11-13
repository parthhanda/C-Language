// #include <stdio.h>
// int main()
// {
//     int n,m;
//     int sum = 0;
//     int temp = n;
//     printf("Enter n -> ");
//     scanf("%d,&n");
//     while(temp>0)
//     {
//         m = temp % 10;
//         sum = (sum*10)+m;
//         temp = temp/10;    
//     }
//     if(n==sum)
//     {
//         printf("Palindrome");
//     }
//     else
//     {
//         printf("Not Palindrome");
//     }

//     return 0;
// }



// #include <stdio.h>
// #include <string.h>
// int isPalindrome(char str[])
// {
//     int h = 0;
//     int l = strlen(str) - 1; 
//     while (l > h)
//     {
//         if (str[h++] != str[l--])
//         {
//             return 0;
//         }
//     }
//     return 1;
// }
// //Main 
// int main()
// {
//     char str[100];
//     int r;
//     scanf("%s",str);
//     r =isPalindrome(str); 
//     if (r==1)
//     printf("%s is palindrome",str); 
//     else
//     printf("%s is not palindrome",str); return 0;
// }



#include <stdio.h>
#include<string.h>
int ispalindrome(char str[])
{
    int h = 0;
    int t = strlen(str)-1;
    while(t>h)
    {
        if(str[h++] != str[t--])
        {
            return 0;
        }
        else
        {
            return 1;
        }
    } 
}
int main()
{
    char str[50];
    int r;
    scanf("%s",str);
    r = ispalindrome(str);
    if(r == 1)
    {
        printf("%s Is palindrome",str);
    }
    else
    {
        printf("Not plaindrome");
    }
}