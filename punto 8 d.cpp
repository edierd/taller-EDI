#include <iostream>
#include <conio.h>

using namespace std;
 
 int main(){
 	int numeros[100][100],filas,columnas;
 	char band='f';
 	
 	cout<<"digite el numero de filas:";cin>>filas;
 	cout<<"digite el numero de columnas:";cin>>columnas;
 	for(int i=0;i<filas;i++){
 		for(int j=0;j<columnas;j++){
 			cout<<"digite un numero ["<<i<<"]["<<j<<":]";
 			cin>>numeros[i][j];
		 }
	 }
 	if(filas==columnas){
 		for (int i=0;i<filas;i++){
 			for(int j=0;j<columnas;j++){
 				if(numeros[i][j] == numeros[j][i]){
				 
 				band = 'v';
			 }
		 }
	 }
 	
	 }
 	 if(band == 'v'){
 		cout<<"la matriz es simetrica";
	 }
	 else{
	 	cout<<"la matriz no es simetrica";
	 }
 	getch();
 	return 0;
 }
