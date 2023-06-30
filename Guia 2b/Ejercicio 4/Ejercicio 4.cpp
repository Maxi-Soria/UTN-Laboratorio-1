#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int alquiler = 10000, presupuesto, cant_caramelos, mantenimiento;
    float costo_x_car, costo_x_caramelo, costo_mes;

    cout << "Ingrese el Presupuesto inicial: ";
    cin >> presupuesto;
    cout << "Ingrese la cantidad de caramelos: ";
    cin >> cant_caramelos;

    mantenimiento = cant_caramelos/1000*5000;
    costo_mes = alquiler + cant_caramelos*0.5 + mantenimiento;

    return 0;
}
