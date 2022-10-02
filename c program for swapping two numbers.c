#include <stdio.h>
int main() 
{
  int first, second, temp;
  printf("Enter the first number: ");
  scanf("%d", &first);
  printf("Enter the second number: ");
  scanf("%d", &second);

  temp = first;
  first = second;
  second = temp;
  
  printf("\nFirst number after swapping is = %d", first);
  printf("\nSecond number after swapping is = %d", second);
  return 0;
}
