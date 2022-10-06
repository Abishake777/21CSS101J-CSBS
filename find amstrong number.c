#include <stdio.h>
main() 
{
  long int n, d, m;
  long int sum = 0;
  printf("Enter a number: ");
  scanf("%ld", &n);
  m = n;
  while(n != 0);
  {
    d = n % 10;
    sum = sum  + (d * d * d);
    n = n / 10;
  }
  if(m == sum)
  {
    printf("%ld is armstrong number.", m);
  }
  else
  {
    printf("%ld is not armstrong number.", m);
  }
} 
