#include<iostream>
using namespace std;

int main() {
	float cantidaddolar;
	float total;
	float valordolar;
	cout << "ingrese el valor del dolar hoy" << endl;
	cin >> valordolar;
	cout << "ingrese la cantidad de dolares" << endl;
	cin >> cantidaddolar;
	total = valordolar*cantidaddolar;
	cout << "el valor total es :" << total << endl;
	return 0;
}

