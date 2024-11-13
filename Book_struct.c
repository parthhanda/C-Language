#include<stdio.h>
#include<conio.h>
struct Books
{
	char Book_name[50];
	char Author[50];
	int No_of_pages;
	float cost_of_book;
	float shipment_cost;
};
void main()
{
	struct Books s1,s2;
	printf("Enter Book Name: ");
	gets(s1.Book_name);
	printf("Enter Second Book Name: ");
	gets(s2.Book_name);
	printf("Enter Author Name: ");
	gets(s1.Author);
	printf("Enter second author name: ");
	gets(s2.Author);
	printf("Enter cost of book 1: ");
	scanf("%f",&s1.cost_of_book);
	printf("Enter cost of book 2: ");
	scanf("%f",&s2.cost_of_book);
	printf("Enter No of pages for book 1: ");
	scanf("%d",&s1.No_of_pages);
	printf("Enter No of pages for book 2: ");
	scanf("%d",&s2.No_of_pages);
	printf("Enter shipment cost for book 1: ");
	scanf("%f",&s1.shipment_cost);
	printf("Enter shipment cost for book 2: ");
	scanf("%f",&s2.shipment_cost);	
	int x= s1.cost_of_book+s1.shipment_cost;
	int y= s2.cost_of_book+s2.shipment_cost;
	printf("\n\n\n\n");	
	printf("The name of book 1 is %s",s1.Book_name);
	printf("\nThe author of book 1 is %s",s1.Author);		
	printf("\nThe number of pages of book 1 is %d",s1.No_of_pages);	
	printf("\nThe total cost inclusive of shipping of book 1 is %d",x);
	printf("\n\n");			
	printf("\nThe name of book 2 is %s",s2.Book_name);
	printf("\nThe author of book 2 is %s",s2.Author);		
	printf("\nThe number of pages of book 2 is %d",s2.No_of_pages);	
	printf("\nThe total cost inclusive of shipping of book 2 is %d",y);	
	
}
