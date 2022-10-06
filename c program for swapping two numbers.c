#include <stdio.h>
int main() 
{
  int first, second, num;
  printf("Enter the first number: ");
  scanf("%d", &first);
  printf("Enter the second number: ");
  scanf("%d", &second);

  num = first;
  first = second;
  second = num;
  
  printf("\nFirst number after swapping is = %d", first);
  printf("\nSecond number after swapping is = %d", second);
  return 0;
}
