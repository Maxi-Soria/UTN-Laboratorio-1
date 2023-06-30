#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int  num_mozo, num_comanda, tipo_plato, x;
    float importe;

    //Punto A
    int cant_platos_1, cant_platos_2, cant_platos_3;

    //Punto B
    int min_mozo;
    float min_importe;
    bool band_prim_plato_princ = 0;

    //Punto C
    float acu_importe = 0;
    int cont_importe = 0;

    cout << "Numero de mozo: ";
    cin >> num_mozo;

    while (num_mozo > 0){

        //Punto A
        cant_platos_1 = 0;
        cant_platos_2 = 0;
        cant_platos_3 = 0;

        for (x = 0; x < 5; x++){

            cout << "Numero de comanda: ";
            cin >> num_comanda;
            cout << "Tipo de plato: ";
            cin >> tipo_plato;
            cout << "Importe: ";
            cin >> importe;
            cout << endl;

            //Punto A
            switch (tipo_plato){
            case 1:
                cant_platos_1++;
            break;
            case 2:
                cant_platos_2++;

                // Punto B
                if (band_prim_plato_princ == 0){
                    min_importe = importe;
                    min_mozo = num_mozo;
                    band_prim_plato_princ = 1;
                }
                else {
                    if (importe < min_importe){
                        min_importe = importe;
                        min_mozo = num_mozo;
                    }
                }

            break;
            case 3:
                cant_platos_3++;
            break;

            }

            acu_importe += importe;
            cont_importe++;

        }
        //Punto A
        cout << "Cant platos del mozo " << num_mozo << " pl 1: " << cant_platos_1 << ", pl 2: " << cant_platos_2 << ", pl 3: " << cant_platos_3 << endl;

        cout << "Numero de mozo: ";
        cin >> num_mozo;
    }
    //Punto B
    cout << "Numero de mozo que atendio el plato principal de menor importe: " << min_mozo << " importe del plato: " << min_importe << endl;

    //Punto C
    cout << "Promedio de costo entre todos los platos: " << acu_importe/cont_importe << endl;
    return 0;
}
