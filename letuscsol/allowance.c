#include <stdio.h> 
 int main() 
 { 
 float Pay, da, hra, gross; 
 printf("\nEnter Basic Salary of Ramesh: "); 
 scanf("%f", &Pay); 
 da = 0.4 * Pay; 
 hra = 0.2 * Pay; 
 gross = Pay + da + hra; 
 printf("Basic Salary of Ramesh: %f\n ", Pay); 
 printf("DA of Ramesh: %f\n ", da); 
 printf("HRA of Ramesh: %f\n ", hra); 
 printf("Gross Salary of Ramesh: %f\n", gross); 
 return 0 ; 
 }
