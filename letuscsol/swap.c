# include <stdio.h> 
 int main( ) 
 { 
 int c, d, e ; 
 printf ( "\nEnter the number at location C: " ) ; 
 scanf ( "%d", &c ) ; 
 printf ( "\nEnter the number at location D: " ) ; 
 scanf ( "%d", &d ) ; 
 /* Interchange contents of two variables using a third variable as 
  temporary store */ 
 e = c ; 
 c = d ; 
 d = e ; 
 printf ( "New Number at location C = %d\n", c ) ; 
 printf ( "New Number at location D = %d\n", d ) ; 
 return 0 ; 
 }
