#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int horas,dias,resto, minutos;
    cout << "Ingrese el total de minutos: ";
	cin >> minutos;

	dias = minutos / 1440;
	resto = minutos % 1440;
	horas = resto / 60;
	resto = resto % 60;

	cout << "La cantidad ingresada son: " << dias << " dias, " << horas << " horas, " << resto << " minutos " << endl;

    return 0;
}
