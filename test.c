
// #include <stdio.h>
// #include<conio.h>

// int main() 
// {
//     int a = 1234;
//     int b = 123;
//     int c = 12;
//     int d = 1;


//     printf("%8d",a);
//     printf("%8d",b);
//     printf("%8d",c);
//     printf("%8d",d);
    



//     float number = 3.14159265359;
//     printf("%.2f\n", number); // %._f -> '_' ki jagah jitne no. utne decimals ayenge.
//     return 0;/


    

//     // display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.
//     int m;
//     printf("Enter the value of m -> ");
//     scanf("%d",&m);

//     if(m>0)
//     {
//         printf("The value of n = 1");
//     } 
//     else if(m==0)
//     {
//         printf("The value of n = 0");
//     } 
//     else if(m<0)
//     {
//         printf("The value of n = -1");
//     }

    
        
// }

// #include <stdio.h>

// int main() {
//     int matchsticks = 21;
//     int user_pick, comp_pick;

//     printf("Welcome to the Matchstick Game!\n");
//     printf("Rules: There are 21 matchsticks. You can pick 1, 2, 3, or 4 matchsticks.\n");
//     printf("Whoever is forced to pick the last matchstick loses the game.\n");

//     while (matchsticks > 0) {
//         // User's turn
//         printf("\nRemaining matchsticks: %d\n", matchsticks);
//         printf("Your turn - pick 1, 2, 3, or 4 matchsticks: ");
//         scanf("%d", &user_pick);

//         // Validate user input
//         if (user_pick < 1 || user_pick > 4 || user_pick > matchsticks) {
//             printf("Invalid input! Please pick a valid number of matchsticks.\n");
//             continue;
//         }

//         matchsticks -= user_pick;

//         // Check if user picked the last matchstick
//         if (matchsticks == 0) {
//             printf("\nYou picked the last matchstick. You lose! Better luck next time.\n");
//             break;
//         }

//         // Computer's turn
//         comp_pick = 5 - user_pick;
//         printf("Computer picks %d matchsticks.\n", comp_pick);
//         matchsticks -= comp_pick;

//         // Check if computer picked the last matchstick
//         if (matchsticks == 0) {
//             printf("\nComputer picked the last matchstick. You win! Congratulations!\n");
//             break;
//         }
//     }

//     return 0;
// }

// #include<stdio.h>
// void main()
// {
//     int arr[5]={35,23,34,56,12};
//     int n,t;

//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(arr[i]>arr[j])
//             {
//                 t=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=t;
//             }
//         }
//     }

// }



#include<stdio.h>
int plaindrome(int num)
{
    int orig = num;
    int rev = 0;
    
    while(num != 0)
    {
        rev = rev * 10 + num % 10;
        num = num /10;
    }
    return orig == rev;
}

int greatest(int a,int b,int c)
{
    if(a>=b && a>=c)
    {
        return a;
    }
    if(b>=a && b>=c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int num1,num2,num3,maximum;
    scanf("%d %d %d",&num1,&num2,&num3);

    maximum = greatest(num1,num2,num3);

    if(palindrome(maximum))
    {
        printf("is palindrome.");
    }
    else
    {
        printf("Not palindrrome.");
    }
}