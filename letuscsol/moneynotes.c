int main( ) 
 { 
 int amount, nohun, nofifty, noten, nofive, notwo, noone, totalnotes ; 
 printf ( "Enter the amount: " ) ; 
 scanf ( "%d", &amount ) ; 
 nohun = amount / 100 ; 
 amount = amount % 100 ; 
 nofifty = amount / 50 ; 
 amount = amount % 50 ; 
 noten = amount / 10 ; 
 amount = amount % 10 ; 
 nofive = amount / 5 ; 
 amount = amount % 5 ; 
 notwo = amount / 2 ; 
 amount = amount % 2 ; 
 noone = amount / 1 ; 
 amount = amount % 1 ; 
 totalnotes = nohun + nofifty + noten + nofive + notwo + noone ; 
 printf ( "Smallest number of notes = %d\n", totalnotes ) ; 
 return 0 ; 
 }
