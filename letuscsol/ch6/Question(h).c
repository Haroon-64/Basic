/* Write a program to generate all Pythagorean Triplets with side 
length less than or equal to 30.*/
#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=30;i++)
		for(j=1;j<=30;j++)   //choose random 2 numbers then calculate the third triplet
            for(k=1;k<=30;k++)
               { if(i*i+j*j==k*k)
                    printf("%d \t %d \t %d \n",i,j,k);
			
                }
}
