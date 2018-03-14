#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
int num,entero,res; 

printf( "Introduce un numero " ); 
scanf( "%i", &num ); 
/* Dividimos por 100 */ 
entero = num/100; 
res = num%100; 
switch( entero ) 
{ 
case 1: printf( "C" ); break; 
case 2: printf( "CC" ); break; 
case 3: printf( "CCC" ); break; 
case 4: printf( "CD" ); break; 
case 5: printf( "D" ); break; 
case 6: printf( "DC" ); break; 
case 7: printf( "DCC" ); break; 
case 8: printf( "DCCC" ); break; 
case 9: printf( "CM" ); break; 
} 
/*Dividimos por 10 */ 
entero = res/10; 
res=res%10; 
switch( entero ) 
{ 
case 1: printf( "X" ); break; 
case 2: printf( "XX" ); break; 
case 3: printf( "XXX" ); break; 
case 4: printf( "XL" ); break; 
case 5: printf( "L" ); break; 
case 6: printf( "LX" ); break; 
case 7: printf( "LXX" ); break; 
case 8: printf( "LXXX" ); break; 
case 9: printf( "XC" ); break; 
} 

switch( res ) 
{ 
case 1: printf( "I" ); break; 
case 2: printf( "II" ); break; 
case 3: printf( "III" ); break; 
case 4: printf( "IV" ); break; 
case 5: printf( "V" ); break; 
case 6: printf( "VI" ); break; 
case 7: printf( "VII" ); break; 
case 8: printf( "VIII" ); break; 
case 9: printf( "IX" ); break; 
}	
printf("n");
system("pause");
return 0;
}
