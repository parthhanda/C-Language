#include<stdio.h>

int main()
{
    int d,m,y;
    int n = 0;
    int ly = 0;
    int r,i,j,ny;
    long int td;

    printf("Enter the Date(dd) -> \n");
    scanf("%d",&d);

    printf("Enter the Month(mm) -> \n");
    scanf("%d",&m);

    printf("Enter the Year(must be greater than 2001 -> \n");
    scanf("%d",&y);

    printf("The entered DATE is -> %d/%d/%d.\n",d,m,y);

    for(i=1;i<m;i++)
    {
        if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i== 12)
            n = n + 31;
        else if(i==2 && y%4 != 0)
            n = n + 28;
        else if(i==2 && y%4 == 0)
            n = n + 29;
        else if(i==4 || i==6 || i==9 || i==11)
            n = n + 30;
    }

    j = 2001;

    while(j<y)
    {
        if(j%4 == 0)
            ly = ly + 1;
        j++;
    }

    ny = y - 2001;
    td = ly+n+d+(ny*365);
    r = td % 7;

    switch(r)
    {
        case 0:
        printf("The day is SUNDAY.");
        break;
        case 1:
        printf("The day is MONDAY.");
        break;
        case 2:
        printf("The day is TUESDAY.");
        break;
        case 3:
        printf("The day is WEDNESDAY.");
        break;
        case 4:
        printf("The day is THURSDAY.");
        break;
        case 5:
        printf("The day is FRIDAY.");
        break;
        case 6:
        printf("The day is SATURDAY.");
        break;
    }
    return 0;
}