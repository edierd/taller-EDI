#include <stdlib.h>
#include <stdio.h>

int main(){
int numeros[]={3,5,7,8,12},i=0,multiplicacion=1;
for(i=0;i<5;i++){
	multiplicacion=multiplicacion*numeros[i];
}
printf("la ultiplicacion de los elementos es de %d",multiplicacion);


return 0;
}
