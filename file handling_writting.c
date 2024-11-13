#include <stdio.h> 
#include<conio.h> 
void main()
{  
   FILE *fp;  
   fp = fopen("hoi.txt", "w");
   fprintf(fp, "Hello file by fprintf...\n"); 
   fclose(fp); 
}  
