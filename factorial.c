#include<stdio.h>

int main()
{
   int i,n,fact=1;

   printf("Enter the Number : ");
   scanf("%d", &n);

   if(n<0)
   {
       printf("ERROR!");
   }

   for(i=1;i<=n;i++)
   fact = fact * i;
   printf("%d\n", fact);
}  