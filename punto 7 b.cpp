#include <stdlib.h>
#include <stdio.h>

int main(){
int numeros[]={2,5,16,19,42,45};
int i=5;
for(i=5;i>=0;i--){
	printf("%d-%d\n",i,numeros[i]);
}


system("pause");
return 0;
}
