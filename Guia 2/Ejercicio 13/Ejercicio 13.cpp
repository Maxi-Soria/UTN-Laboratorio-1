#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int dia_nac, mes_nac, anio_nac, dia_act, mes_act, anio_act, edad;
    cout << "FECHA DE NACIMIENTO " << endl;
    cout << "Ingrese su dia: " ;
    cin >> dia_nac;
    cout << "Ingrese su mes: ";
    cin >> mes_nac;
    cout << "Ingrese su año: ";
    cin >> anio_nac;

    cout << endl << "FECHA ACTUAL " << endl;
    cout << "Ingrese dia: ";
    cin >> dia_act;
    cout << "Ingrese mes: ";
    cin >> mes_act;
    cout << "Ingrese año: ";
    cin >> anio_act;
    cout << endl;

    edad = anio_act - anio_nac;
    if (mes_nac > mes_act){
        edad = edad -1;
    }else {
        if (mes_nac == mes_act){
            if (dia_nac > dia_act){
                edad = edad - 1;
            }
        }
    }
    cout << "Su edad es: " << edad << " años" << endl;

    return 0;
}
