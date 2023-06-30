#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");
    int const CANT_CLIENTES = 20;
    int const CANT_ENTRENAM = 5;

    int num_entrenam, cliente, tipo_entrenam, tiempo_entrenam;

    //PUNTO A
    int horas, minutos, vec_clientes[CANT_CLIENTES] = {} ;

    //PUNTO B
    int mat_entrenamientosXcliente[CANT_CLIENTES][CANT_ENTRENAM] = {};

    //PUNTO C
    int mat_min_entre_client_tipo[CANT_CLIENTES][CANT_ENTRENAM] = {};

    //PUNTO D
    int max_min_entrenamiento, pos_cliente_mas_entreno;

    cout << "Numero de entrenamiento: ";
    cin >> num_entrenam;

    while (num_entrenam != 0){

        cout << "Numero de ciente";
        cin >> cliente;
        cout << "Tipo de entrenamiento: ";
        cin >> tipo_entrenam;
        cout << "Tiempo de entrenamiento: ";
        cin >> tiempo_entrenam;
        cout << endl;

        //PUNTO A
        vec_clientes[cliente-101] += tiempo_entrenam;

        //PUNTO B
        mat_entrenamientosXcliente[cliente-101][tipo_entrenam-1] += tiempo_entrenam;

        //PUNTO C
        mat_min_entre_client_tipo[cliente-101][tipo_entrenam-1] += tiempo_entrenam;


        cout << "Numero de entrenamiento: ";
        cin >> num_entrenam;

    }

    //PUNTO A
    cout << "PUNTO A" << endl;
    for (int x = 0; x < CANT_CLIENTES; x++){
            horas = vec_clientes[x]/60;
            minutos = vec_clientes[x] - horas * 60;
            cout << "El cliente " << x+101  << " entreno durante: " << horas << ":" << minutos << " (hs:min)" << endl;
    }

    //PUNTO B
    cout << endl << "PUNTO B" << endl;
    for (int x = 0; x < CANT_CLIENTES; x++){
        cout << "Cliente: " << x+101 << " realizo los entrenamientos: ";
        for (int i = 0; i < CANT_ENTRENAM; i++){
            if (mat_entrenamientosXcliente[x][i] > 0){
                cout << i+1 << " ";
            }
        }
        cout << endl;
    }

    //PUNTO C
    cout << endl << "PUNTO C" << endl;
    for (int x = 0; x < CANT_CLIENTES; x++){
        cout << "Cliente: " << x+101 << endl;
        for (int i = 0; i < CANT_ENTRENAM; i++){
            if (mat_min_entre_client_tipo[x][i] > 0){
                cout << "Entrenamiento " <<i+1 << " Minutos entrenados: " << mat_min_entre_client_tipo[x][i] << endl;
            }
        }
        cout << endl;
    }

    //PUNTO D
    cout << endl << "PUNTO C" << endl;
    max_min_entrenamiento = vec_clientes[0];
    pos_cliente_mas_entreno = 0;

    for (int x = 1; x < CANT_CLIENTES; x++){
        if (vec_clientes[x] > max_min_entrenamiento){
            max_min_entrenamiento = vec_clientes[x];
            pos_cliente_mas_entreno = x;
        }

    }
    cout << "El cliente que mas tiempo entreno es el n°: " << pos_cliente_mas_entreno+101 << endl;

    return 0;
}
