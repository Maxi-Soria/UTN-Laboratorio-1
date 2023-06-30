#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int peso_encom, peso_acum = 0, camion = 0;
    int importe_A = 100, importe_B = 200, importe_C = 300;
    float costo_camion = 0, costo_final = 0;

    cout << "Ingrese el peso de la encomienda: " ;
    cin >> peso_encom;

    while (peso_encom > 0){


            peso_acum = 0;
            costo_camion = 0;
            while ((peso_acum + peso_encom) < 100 && peso_encom > 0){

                peso_acum += peso_encom;

            if (peso_encom <= 10 ){
                costo_camion += importe_A;
            }
            else{
                if (peso_encom > 10 && peso_encom <= 40){
                    costo_camion += importe_B;
                }
                else {
                    costo_camion += importe_C;
                }
            }

                cout << "Ingrese el peso de la encomienda: " ;
                cin >> peso_encom;

            }
            camion++;
            costo_final += costo_camion;
            cout << endl << endl <<  "Camion numero: " << camion << " Despachado con: " << peso_acum << " kg" << endl << endl;
            cout << "Costo del camion es :" << costo_camion << endl;


    }
    cout << "Costo final: " << costo_final << endl;
    cout << "Total de camiones despachados : " << camion << endl;
    return 0;
}
