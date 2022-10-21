#include<stdio.h>
int main()
{
  float sp,cp;
  printf("Enter Cost Price and Selling Price\n");
  scanf("%f %f",&cp,&sp);
  if(sp-cp>0)
  {
     printf("Profit incurred is %f.",sp-cp);
  }
  if(sp-cp<0)
    {
      printf("Loss incurred is %f",cp-sp);
     }
return 0;
}
