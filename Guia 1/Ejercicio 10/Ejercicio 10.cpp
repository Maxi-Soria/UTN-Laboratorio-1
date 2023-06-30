#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int horas,dias, horas_restantes;
    cout << "Ingrese el total de horas: ";
	cin >> horas;

	dias = horas / 24;
	horas_restantes = horas % 24;

	cout << "La cantidad ingresada equivale a " << dias << " dias , " << horas_restantes << " horas " << endl;

    return 0;
}
