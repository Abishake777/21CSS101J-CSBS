#include <stdio.h>
int main() 
{
   printf("Registor Number-RA2211042010054\n");
   int n, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) 
        sum += i;
    printf("Sum = %d", sum);
    return 0;
}
