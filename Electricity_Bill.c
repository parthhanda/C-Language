#include<stdio.h>
#include<conio.h>

int main()
{
    int unit;
	float amt;
	printf("enter number of units:");
	scanf("%d",&unit);
	if(unit>=0&&unit<=150){
		amt=unit*3;	
	}
	else if(unit>=151&&unit<=350){
		amt=100+(unit-150)*3.75;
	}
	else if(unit>=351&&unit<=450){
		amt=250+(unit-350)*4;
    }
    else if(unit>=451&&unit<=600){
		amt=300+(unit-450)*4.25;
    }
	else {
	    amt=400+(unit-600)*5;
    }
    
    printf("%f",amt);

}