#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int autos_vendidos , premio;
	float sueldo_fijo, total;

	premio = 2000;
	sueldo_fijo = 15000;

	cout << "Ingrese el total de autos vendidos: ";
	cin >> autos_vendidos;

	total = sueldo_fijo + autos_vendidos * premio;

	cout << "El total a cobrar es: $" << total << endl;

    return 0;
}
