#include <stdio.h>
#include<string.h>
void main()
{
    // // To find the length of a string using "strlen" function.
    // char name[30];
    // printf("Enter name -> ");
    // gets(name);
    // printf("Lenth of the string is %d.",strlen(name));

    // // To find the length of a string without using "strlen" function.
    // char name[30];
    // int i=0,count=0;
    // printf("Enter name -> ");
    // gets(name);
    // while(name[i] != '\0')
    // {
    //     count++;
    //     i++;
    // }
    // printf("Lenth of the string is %d.",count);




    // // To concatenate two strings using "strcat" function.
    // char n1[30] = "Parth ";
    // char n2[30] = "Handa";

    // strcat(n1,n2);

    // printf("Full name -> %s",n1);




    // // To check if two strings are equal or not using "strcmp" function.
    // char s1[30],s2[30];
    // int value;

    // printf("Enter first string -> ");
    // gets(s1);

    // printf("Enter second string -> ");
    // gets(s2);

    // value = strcmp(s1,s2);

    // if(value == 0)
    // {
    //     printf("Same");
    // }
    // else
    // {
    //     printf("Different");
    // }





    // // To reverse a string using the "strrev" function.
    // char s1[30];
    
    // printf("Enter the string -> ");
    // gets(s1);

    // strrev(s1);
    // printf("Reversed string -> %s",s1);





    // // To convert a string from uppercase to lowercase using "strlwr" function.
    // char s1[30];
    // printf("Enter a string -> ");
    // gets(s1);
    // strlwr(s1);
    // printf("%s",s1);




    // To convert a string from lowercase to uppercase using "strupr" function.
    char s1[30];
    printf("Enter a string -> ");
    gets(s1);
    strupr(s1);
    printf("%s",s1);

}