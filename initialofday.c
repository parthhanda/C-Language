#include<stdio.h>
#include<conio.h>
void main()
{
	char x;
	printf("Enter initial of day: ");
	scanf("%c",&x);
	switch(x)
	{
		case 'm':
			printf("It is Monday");
			break;
	    case 't':
			printf("It is Tuesday");
			break;
		case 'w':
			printf("It is Wednesday");
			break;
		case 'h':
			printf("It is Thursday");
			break;
	    case 'f':
			printf("It is Friday");
			break;
		case 's':
			printf("It is Saturday");
			break;
		case 'u':
			printf("It is Sunday");
			break;
		default:
			printf("Invalid entry");
	}
}
