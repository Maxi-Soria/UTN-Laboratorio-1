#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    setlocale (LC_ALL, "Spanish");

    int horas;
	float total, valor_hora;

	cout << "Ingrese el total de horas trabajadas: ";
	cin >> horas;
	cout << "Ingrese el valor de la hora: $";
	cin >> valor_hora;

	total = horas * valor_hora;

	cout << endl << "El monto a cobrar es $: " << total << endl;

    return 0;
}
