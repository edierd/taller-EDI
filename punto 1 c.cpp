
//calcular el salario de un empleado pidiendole que ingres 4 variables (horas nocturnas_diurnas:dominicales_festivas)las variables deben ser operadas tomando como base la siguiententabla#
#include <stdio.h>


int main() {
	float incremento, nhoradiurna, nhoradominical, nhorafestiva, nhoranocturna;
	float totalhoradominical;
	float totalhorafestiva;
	float totalhoranocturna;
	float totalhorasdiurnas;
	float totalsalario;
	float valorhora;
	printf ("ingrese valor hora");
	scanf ("%d",valorhora);
	printf ("ingrese el numero de horas diurnas");
	scanf ("%d",nhoradiurna);
	printf ("ingrese el numero de horas nocturnas");
	scanf ("%d",nhoranocturna);
	printf ("ingrese el numero de horas dominicales" );
	scanf ("%d",nhoradominical);
	printf("ingrese el numero de horas festivas" );
	scanf ("%d",nhorafestiva);
	printf("calcular sueldo" );
	totalhorasdiurnas = (nhoradiurna*valorhora);
	printf ("el valor de horas diurnas es de :" );
	incremento = (valorhora*nhoranocturna)*0.35;
	totalhoranocturna = (valorhora*nhoranocturna)+incremento;
	printf("el valor de las horas nocturnas es:" , totalhoranocturna);
	incremento = (valorhora*nhoradominical)*0.50;
	totalhoradominical = (valorhora*nhoradominical)+incremento;
	printf("el valor de las horas dominicales es:" , totalhoradominical);
	
	
	incremento = (valorhora*nhorafestiva)*0.75;
	totalhorafestiva = (valorhora*nhorafestiva)+incremento;
	printf ("el valor de las horas festivas es:" , totalhorafestiva );
	totalsalario = (totalhorafestiva+totalhoradominical+totalhoranocturna+totalhorasdiurnas);
	printf ("el salario total es:", totalsalario );
	return 0;
}

