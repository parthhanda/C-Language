#include<stdio.h>
#include<conio.h>
void main()
{
	char name[20];
	printf("Enter name: ");
	gets(name);
	printf("Your name is ");
	puts(name);
	printf("Lenght of object is %d",strlen(name));
}
