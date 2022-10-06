#include <stdio.h>
main() 
{
  int i, g, s, a[5];
  printf("Enter the array elements: ");
  for(i = 0; i < 5; i++)
  {
    scanf("%d", &a[i]);
  }
  g = a[0];
  s = a[0];
  for(i = 0; i < 5; i++)
  {
    if(a[i] > g) 
    { 
      g = a[i];
    }
    if(a[i] < s) 
    {
      s = a[i];
    }
  }
  printf("\nGreatest Element = %d", g);
  printf("\nSmallest Element = %d", s);
} 
