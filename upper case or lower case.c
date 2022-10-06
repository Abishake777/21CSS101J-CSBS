#include <stdio.h>

int main() 
{
    char ch; 
    printf("Enter the alphabet:");

    scanf("%c",&ch);

   if(ch>=65 && ch<=90)

      printf("upper case");

    else if(ch>=97 && ch<=122)
 

    printf("lower case");

     
    else
     printf("Invalid input");
return 0;
}
