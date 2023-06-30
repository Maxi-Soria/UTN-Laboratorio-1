#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int const CANT_EMPLEADOS = 5;

    int num_empleado, dia, hs_trab;
    float vec_hs_comun[CANT_EMPLEADOS] = {} , vec_hs_extra[CANT_EMPLEADOS] = {};


    //PUNTO A

    int normales, extras;
    float vec_sueldo[CANT_EMPLEADOS] = {}, val_hs_norm, val_hs_extr;

    for (int x = 0; x < CANT_EMPLEADOS; x++){
        cout << "Numero de empleado: ";
        cin >> num_empleado;

        cout << "Valor de la hora: ";
        cin >> val_hs_norm;

        cout << "Valor de la hora extra: ";
        cin >> val_hs_extr;

        vec_hs_comun[num_empleado-1] = val_hs_norm;
        vec_hs_extra[num_empleado-1] = val_hs_extr;

    }

    cout << endl << endl;

    cout << "Numero de empleado: ";
    cin >> num_empleado;

    while (num_empleado != 0){
        cout << "Dia: ";
        cin >> dia;
        cout << "Horas trabajadas: ";
        cin >> hs_trab;
        cout << endl;

        if (hs_trab <= 9){
           normales = hs_trab;
           extras = 0;
        }
        else {
            normales = 9;
            extras = hs_trab - 9;
        }
        vec_sueldo[num_empleado-1] += vec_hs_comun[num_empleado-1]* normales + vec_hs_extra[num_empleado-1]*extras;


        cout << "Numero de empleado: ";
        cin >> num_empleado;

    }


    for (int x = 0; x < CANT_EMPLEADOS; x++){
        if (vec_sueldo[x] > 0){
            cout << "Empleado numero: " << x+1 << " sueldo: $" << vec_sueldo[x] << endl;
        }
    }
    return 0;
}
