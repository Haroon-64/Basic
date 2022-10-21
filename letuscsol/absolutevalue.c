#include<stdio.h>
int main()
{
int a;

printf("Enter any number : ");
scanf("%d", &a);

if(a>0)
	printf("\n\n%d is it's absolute value.", a);
else
	printf("\n\n%d is it's absolute number.", -1*a);

return 0;
}
