#include <stdio.h>
void main() 
{
  int a, b;
  int *p1, *p2;
  printf("Enter two values: ");
  scanf("%d%d", &a, &b);
  p1 = &a;
  p2 = &b;
  printf("Addition is %d", (*p1 + *p2));
}
