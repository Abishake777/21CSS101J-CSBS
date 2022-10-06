#include <stdio.h>
main() 
{
  int i, len = 0, j = 0;
  char  s[100], rev[100];
  printf("Enter the string: ");
  gets(s);
  for(i = 0; s[i] != '\0'; i++)
  {
    len++;
  }
  for(i = len - 1; i >= 0; i--)
  {
    rev[j++] = s[i];
  }
  rev[j] = '\0';
  printf("Reverse string is %s", rev);
}
