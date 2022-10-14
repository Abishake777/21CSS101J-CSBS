#include <stdio.h>
int main() {
  int n, i;
  printf("registor number-RA2211042010054\n"); 
  printf("Enter an integer: ");
  scanf("%d", &n);
  for (i = 1; i <= 10; ++i) 
  printf("%d * %d = %d \n", n, i, n * i); 
  return 0;
}
