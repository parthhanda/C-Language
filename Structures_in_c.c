#include<stdio.h>
#include<conio.h>
struct employeeee
{
	int id;
	char name[50];
};
void main()
{
	struct employeeee s1,s2;
	s1.id=69;
	s2.id=70;
	printf("Enter first name :");
	gets(s1.name);
	printf("Enter second name :");
	gets(s2.name);
	printf("%d",s1.id);	
	printf("\n%d",sizeof(s1));
}
