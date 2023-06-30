#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");
    int const TAM= 31;

    int num_venta, num_dia;
    float importe;

    //PUNTO A
    float vec_dia[TAM] = {};

    //PUNTO B
    int dia_rec_max;
    float rec_max;

    cout << "Numero de venta: ";
    cin >> num_venta;
    cout << "----------------" << endl;

    while (num_venta != 0){
        cout << "Numero de dia: ";
        cin >> num_dia;
        cout << "Importe: ";
        cin >> importe;
        cout << endl;

        vec_dia [num_dia - 1] += importe;



        cout << "Numero de venta: ";
        cin >> num_venta;
        cout << "----------------" << endl;
    }
    //PUNTO A
    for (int x = 0; x < TAM; x++){
        if (vec_dia [x] > 0){
            cout << "Recaudacion del dia " << x+1 << " es: " << vec_dia[x] << endl;
        }
    }

    //PUNTO B
    rec_max = vec_dia[0];
    dia_rec_max = 0;
    for (int x = 1; x < TAM; x++){


        if (vec_dia [x] > rec_max){
            rec_max = vec_dia [x];
            dia_rec_max = x+1;
        }
    }

    cout << "La recaudacion maxima fue: " << rec_max << " del dia: " << dia_rec_max << endl;

    return 0;
}
