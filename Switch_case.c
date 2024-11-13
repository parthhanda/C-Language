#include<stdio.h>
#include<conio.h>
void main()
{
	int x=12;
	switch(x)
	{
		case 3:
			printf("You choose 3");
			break;
	    case 7:
			printf("You choose 7");
			break;
		case 1:
			printf("You choose 1");
			break;
		case 4:
			printf("You choose 4");
			break;
	    case 19:
			printf("You choose 19");
			break;
		default:
			printf("You choose an invalid no.= %d",x);
	}
}

