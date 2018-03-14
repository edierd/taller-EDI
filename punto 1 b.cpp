//pedir al usuario que ingrese la base y la altura de un triangulo y calcular su area (base x altura/2)
#include <stdio.h>

int main()
{
   float altura, area, base;

   printf( "Introduzca base: " );
   scanf( "%f", &base );
   printf( "Introduzca altura: " );
   scanf( "%f", &altura );
   area = base * altura / 2;

   printf( "El area del triangulo es: %f", area );

   return 0;
}
