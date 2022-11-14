#include <stdio.h>
int main() {
    printf("RA2211042010054\n");
    int sum = 0,n = 1;
    while (n<=10) {
        sum = sum + n*n;
        n = n+1;
    }
    printf("sum = %d\n",sum);
}
