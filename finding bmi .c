#include <stdio.h>
int main()
{
  printf("RA2211042010005\n");
float height,weight,bmi;
  printf("Enter the height (in metres) : ");
   scanf("%f", &height);
  printf("Enter the weight (in kgs) : ");
   scanf("%f", &weight);
   bmi=weight/(height*height);
    printf("The BMI index is : %.2f",bmi);
}
