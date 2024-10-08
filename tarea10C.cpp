
#include <iostream>
using namespace std;

int sumaRecursiva(long long int n) {

	if (n <= 9) {
		return n;
	}
	else {
		return sumaRecursiva(n / 10) + n % 10;
	}

}

int SumaIterativa(long long  int n) {
	int suma = 0;

	while (n > 9) {
		suma += n % 10;
		n /= 10;
	}

	return suma + n;

}

int main() {

	long long int Numero;

	cout << "Este programa tiene la capacidad de sumar  los digitos de un numero entero" << endl;
	cout << "Ingrese  un numero entero: ";
	cin >> Numero;

	cout << "El resultado de la Suma Iterativa es: " << SumaIterativa(Numero) << endl;
	cout << "El resultado de la Suma Recursiva es: " << sumaRecursiva(Numero) << endl;

}