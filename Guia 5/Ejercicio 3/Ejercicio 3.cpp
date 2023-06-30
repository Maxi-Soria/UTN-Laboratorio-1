#include <iostream>
#include <clocale>

using namespace std;


int main (){

    setlocale (LC_ALL, "Spanish");

    int i, j, legajo, horas, entrada, salida, acu_horas = 0;
    bool falto = 0;

    for (i = 0; i < 50; i++){

        cout << "Ingrese Numero de Legajo: ";
        cin >> legajo;
        cout << "Ingrese horas: ";
        cin >> horas;
        cout << "--------------" << endl;

        acu_horas = 0;
        for (j = 0; j < 7; j++ ){
            cout << "DIA: " << j+1 << endl;
            cout << "Entrada: ";
            cin >> entrada;
            cout << "Salida: ";
            cin >> salida;

            if (entrada == 0 && salida == 0){
                falto = 1;
            }
            acu_horas += (salida - entrada);

            cout << endl;
        }

        if (falto){
            cout << "Legajo: " << legajo << " falto " << endl;
            falto = 0;
        }

        if (acu_horas < horas){
            cout << "Trabajo de menos " << endl;
        }
        else {
            if (acu_horas > horas){
                cout << "Trabajo de mas " << endl;
            }
            else {
                cout << "Trabajo justo" << endl;
            }
        }



    cout << endl;
    }

    return 0;

}
