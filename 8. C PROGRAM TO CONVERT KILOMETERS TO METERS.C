#include <stdio.h>
int main()
{
  
  int meters, kilometers;

  printf("Enter distance in Kilometers=");
  scanf("%d", &kilometers);

  meters = kilometers * 1000;

  printf("%d Kilometers are equal to %d meters", kilometers, meters);

  return 0;
}
