#include <stdio.h>
int main(){
	int i, mayor=0;
	do{
		printf("\ningrese el numero:");
		scanf("%i",&i);
		if(mayor<1) mayor=1;
	}while(i!=0);
	printf("\n el mayor es %1",mayor);
	return 0;
}


