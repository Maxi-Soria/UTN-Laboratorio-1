#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int acum_sueldos = 0, cont_sueldo = 0;
    float  sueldo, sueldo_max, sueldo_min;

    for (int x = 0 ; x < 10 ; x++){
        cout << "Ingrese el sueldo del empleado: " << x+1 << ": $";
        cin >> sueldo;

        acum_sueldos+=sueldo;

        if (sueldo > 5000){
            cont_sueldo++;
        }

        if (x == 0){
            sueldo_max = sueldo;
            sueldo_min = sueldo;
        }
        else {
            if (sueldo > sueldo_max){
                sueldo_max = sueldo;
            }
            else {
                if (sueldo < sueldo_min){
                    sueldo_min = sueldo;
                }
            }
        }
    }
    cout << endl;
    cout << "Sueldo maximo: " << sueldo_max;
    cout << "\nSueldo minimo: " << sueldo_min;
    cout << "\nSueldo promedio: " << acum_sueldos/5;
    cout << "\nSueldos mayores a $5000: " << cont_sueldo;
    return 0;
}
