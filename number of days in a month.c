#include <stdio.h>

int main() 
{
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31},m; 
    printf("Enter the month:");

    scanf("%d",&m);
    if(m>12 || m<1)
    {
    	
    
     printf("Invalid input");
    }
    else if(m==2)
    {
    	printf("no of days in month 2 is either 29 or 28");
    }
    else
    
    	printf("no of days in month %d is %d",m,a[m-1]);
 
}
