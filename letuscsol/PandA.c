# include <stdio.h> 
 int main( ) 
 { 
 int l, b, r, area1, perimeter; 
 float area2, circum; 
 printf("\nEnter Length & Breadth of Rectangle: "); 
 scanf("%d %d", &l, &b); 
 area1 = l * b; 
 perimeter = 2 * l + 2 * b; 
 printf("Area of Rectangle = %d\n", area1); 
 printf("Perimeter of Rectangle = %d\n", perimeter); 
 printf("\n\nEnter Radius of circle: "); 
 scanf("%d", &r ); 
 area2 = 3.14 * r * r;  
 circum = 2 * 3.14 * r;  
 printf("Area of Circle = %f\n", area2); 
 printf("Circumference of Circle = %f\n", circum); 
 return 0; 
 }
