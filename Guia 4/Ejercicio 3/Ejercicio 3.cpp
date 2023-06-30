#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    float numero, mayor, posicion = 0, aux_posicion;
    bool band_prim = false;

    cout << "Ingrese un numero: ";
    cin >> numero;
    posicion++;

    while (numero != 0){

        if (band_prim == 0){
            mayor = numero;
            aux_posicion = posicion;
            band_prim = true;
        }
        else {
            if (numero > mayor){
                mayor = numero;
                aux_posicion = posicion;
            }
        }

        cout << "Ingrese un numero: ";
        cin >> numero;
        posicion++;
    }

    cout << "Numero mayor: " << mayor << " Posicion: " << aux_posicion << endl;

    return 0;
}
