                 
#include <stdio.h>
main() 
{
  int i, j = 0, len = 0, count = 0;
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
  for(i = 0; s[i] != '\0'; i++)
  {
    if(s[i] == rev[i]) 
    {
      count++;
    }
  }
  if(len == count) 
  {
    printf("String is palindrome.");
  }
  else
  {
    printf("String is not palindrome.");
  }
}
