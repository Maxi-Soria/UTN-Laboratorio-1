#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int horas, minutos, min_restantes;
    cout << "Ingrese el total de minutos: ";
	cin >> minutos;

	horas = minutos / 60;
	min_restantes = minutos % 60;

	cout << "La cantidad ingresada equivale a " << horas << " horas " << min_restantes << " minutos " << endl;

    return 0;
}
