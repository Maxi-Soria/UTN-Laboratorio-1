#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    float numero, mayor;
    bool band_prim = false;

    cout << "Ingrese un numero";
    cin >> numero;

    while (numero != 0){

        if (band_prim == 0){
            mayor = numero;
            band_prim = true;
        }
        else {
            if (numero > mayor){
                mayor = numero;
            }
        }
        cout << "Ingrese un numero";
        cin >> numero;
    }

    cout << "Numero mayor: " << mayor << endl;

    return 0;
}
