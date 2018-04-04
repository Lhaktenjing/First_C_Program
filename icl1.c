#include <stdio.h>
int main()
{
   // printf() displays the string inside quotation
  FILE *ptr;
  ptr = fopen("sherpal.txt","w");
  fprintf(ptr, "This lab was confusing");
  fclose(ptr);  
 printf("Hello, World!");
   return 0;
}
