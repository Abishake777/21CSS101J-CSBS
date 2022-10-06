#include <stdio.h>
main() 
{
  int a[5], i;
  printf("Enter elements of array: ");
  for(i = 0; i < 5; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("Elements of array: ");
  for(i = 0; i < 5; i++)
  {
    printf("%d  ", a[i]);
  }
} 
