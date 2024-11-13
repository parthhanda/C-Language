#include <stdio.h>

int main() {
    int CL, TC;
    char ML;

    printf("Enter the total number of classes: ");
    scanf("%d", &TC);

    printf("Enter the number of classes attended: ");
    scanf("%d", &CL);

    printf("Did you take medical leave? (Enter 'y' for yes, 'n' for no): ");
    scanf(" %c", &ML);  

    
    if (ML == 'Y' && ML == 'n') {
        int MLDays;
        printf("Enter the number of days on medical leave: ");
        scanf("%d", &MLDays);

       
        CL += MLDays;
    }
    
    
    float attendancePercentage = (float)CL / TC * 100;

    
    if (attendancePercentage < 75) {
        printf("Sorry, your adjusted attendance percentage is %.2f%%. You are not eligible for the final examination.\n", attendancePercentage);
    } else {
        printf("Congratulations! You are eligible for the final examination with an adjusted attendance percentage of %.2f%%.\n", attendancePercentage);
    }

    return 0;
}

