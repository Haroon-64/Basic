#include<stdio.h>
int main()
{
int num,a,b,c,d,e,x;

printf("Enter a five digit number : ");
scanf("%d", &num);

//separating digits of the number
e = num % 10;
d = (num/10) % 10;
c = (num/100) % 10;
b = (num/1000) % 10;
a = (num/10000);

//reversing the number
x = e*10000 + d*1000 + c*100 + b*10 + a;
printf("\n%d", x);

if(x == num)
	printf("\n\nThe reverse of the number %d is same as actual number.", num);
  
return 0;
}
