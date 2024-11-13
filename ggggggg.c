#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fc;
	char Buff[255];
	fc=fopen("hoi.txt","r");
	while(fscanf(fc,"%s",Buff)!=EOF)
	{
		printf("%s",Buff);
	}	
	fclose(fc);
}
