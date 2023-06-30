#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int num_venta, cant_butacas = 1200, but_restantes = 1200, rec;

    cout << "Numero de venta: ";
    cin >> num_venta;

    while (num_venta != 0 && but_restantes > 0){

        cout << "Cantidad de butacas: ";
        cin >> cant_butacas;

        but_restantes -= cant_butacas;

        if (but_restantes <  0){
            cout << endl;
            cout << "CANTIDAD DE BUTACAS EXEDIDA!!!" << endl;
            cout << "Butacas restantes: "<< but_restantes + cant_butacas << endl;
            cout << "Reingrese el numero de venta y la cantidad de butacas " << endl;

            but_restantes = but_restantes + cant_butacas;
        }

        if (but_restantes > 0){
            cout << endl <<  "Numero de venta: ";
            cin >> num_venta;
        }
    }

    rec= (1200-but_restantes)*5000;
    cout << "Recaudacion: $" << rec << endl;
    cout << "Butacas sin vender: " << but_restantes << endl;
    return 0;
}
