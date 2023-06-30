#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int cant_huevos, cajas, sueltos, importe;

    cout << "Ingrese la cantidad de huevos comprados: ";
    cin >> cant_huevos;

    cajas = cant_huevos / 12;
    sueltos = cant_huevos % 12;
    importe = cajas * 100 + sueltos * 12;

    cout << "El importe a abonar es: $" << importe << endl;

    return 0;
}
