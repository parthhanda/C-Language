// Find greatest of three numbers and check if its palindrome.
// #include<stdio.h>

// int is_palindrome(int num)
// {
//     int original = num;
//     int reversed = 0;

//     while(num > 0)
//         {
//             reversed = reversed * 10 + num % 10;
//             num = num / 10;
//         }
//     return original == reversed;
// }

// int greatest_num(int A,int B,int C)
// {
//     if(A>=B && A>=C)
//     {
//         return A;
//     }
//     if(B>=A && B>= C)
//     {
//         return B;
//     }
//     else{
//         return C;
//     }
// }

// int main()
// {
//     int num1 , num2 , num3 , greatest;
//     scanf("%d %d %d",&num1,&num2,&num3);

//     greatest = greatest_num(num1, num2, num3);
//     if(is_palindrome(greatest))
//     {
//         printf("%d\nPalindrome",greatest);
//     }
//     else{
//         printf("%d\nNot Palindrome",greatest);
//     }
// }



// Toggle character
// #include <stdio.h>
// int main()
// {
//     char str[50];
//     scanf("%s",str);
//     int i = 0;
//     while(str[i] != '\0')
//     {
//         if(str[i]>='A' && str[i]<='Z')
//         {
//             str[i] += 32;
//         }
//         else
//         {
//             str[i] -= 32;
//         }
//         i++;
//     }
//     printf("%s",str);
//     return 0;
// }



// Multiplication of digits.
// #include<stdio.h>
// int main()
// {
//     int n,r,mul=1;
//     scanf("%d",&n);
    
//     while (n!=0)
//     {
//         r=n%10;
//         mul=mul*r;
//         n=n/10;
//     }
//     printf("%d",mul);
// }



// Calculation check.
#include <stdio.h>
int main() {
    float radius, inputArea, calculatedArea;

    // Get the radius and area from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    printf("Enter the area of the circle: ");
    scanf("%f", &inputArea);

    // Calculate the area using the formula πr²
    calculatedArea = 3.14 * radius * radius;

    // Check if the calculated area matches the input area
    if (calculatedArea == inputArea) {
        printf("calculation is right\n");
    } else {
        printf("calculation is wrong\n");
    }

    return 0;
}
