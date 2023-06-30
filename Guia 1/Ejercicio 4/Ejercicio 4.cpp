#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int asientos_disp, pasajes_vend;
	float porc_ocupacion, porc_desocupacion;

	cout << "Ingrese el total de asientos disponibles: ";
	cin >> asientos_disp;

	cout << "Ingrese el total de pasajes vendidos: ";
	cin >> pasajes_vend;

	porc_ocupacion = pasajes_vend * 100 / asientos_disp;

	porc_desocupacion = 100 - porc_ocupacion;

    cout << endl;
	cout << "El porcentaje de ocupacion es: " << porc_ocupacion << "%" << endl;
	cout << "El porcentaje de desocupacion es: " << porc_desocupacion << "%" << endl;
    return 0;
}
