#include <stdio.h>
#include <conio.h>
int sum(int n);

int main() {
    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = sum(number);

    printf("sum = %d", result);
    return 0;
}

int sum(int n) {
    if (n == 1)
        // sum() function calls itself
        return n;
        
    else
        return n + sum(n-1); 
}
