#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter value of Number1: ");
    scanf("%d",&n1);
    printf("Enter value of Number2: ");
    scanf("%d",&n2);   
   
    if(n1>n2)
        printf("Number1 is larger");
    else if(n2>n1)
        printf("Number2 is larger");
    else
        printf("Both numbers are equal");
    return 0;
}
