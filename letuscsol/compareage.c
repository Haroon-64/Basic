#include<stdio.h>
int main()
{
int ram,sam,ajy;

printf("Enter the age of Ram, Shyam and Ajay respectively : ");
scanf("%d%d%d", &ram,&sam,&ajy);

if(ram<sam && ram<ajy)
	printf("\n\nRam is youngest among all.");
else if(sam<ram && sam<ajy)
	printf("\n\nShyam is youngest among all.");
else
	printf("\n\nAjay is youngest among all.");

return 0;
}
