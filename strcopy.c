#include<conio.h>
#include <stdio.h>
#include <string.h>

int main() {
  char str1[20] = "C programming";
  char str2[20];

  strcpy(str2, str1);

  puts(str2); 
  
  return 0;
}
