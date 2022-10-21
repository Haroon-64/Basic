#include<stdio.h>
int main()
{
float r,x,y;

printf("Enter the radius of the circle : ");
scanf("%f", &r);

printf("\n\nEnter the x-y coordinates of the point for checking it's position : ");
scanf("%f%f", &x,&y);

if(r > sqrt(pow(x,2) + pow(y,2)))
	printf("\n\nThe pints lie inside the circle.");
else if(r == sqrt(pow(x,2) + pow(y,2)))
	printf("\n\nThe points lie on the circle.");
else
	printf("\n\nThe points lie outside the circle.");

return 0;
}
