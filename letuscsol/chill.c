# include <stdio.h> 
 # include <math.h> 
 int main( ) 
 { 
 float temp, vel, wcf ; 
 printf ( "\nEnter values of temp and velocity: " ) ; 
 scanf ( "%f %f", &temp, &vel ) ; 
 wcf = 35.74 + 0.6215 * temp + ( 0.4275 * t - 35.75 ) 
 * pow ( vel, 0.16f ) ; 
 printf ( "Wind Chill Factor = %f\n", wcf ) ; 
 return 0 ; 
 }
