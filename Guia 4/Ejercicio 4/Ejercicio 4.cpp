#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int numero, mayor_par;
    bool band_primer_par = false;

    cout << "Ingrese un numero: ";
    cin >> numero;

    while (numero != 0){

        if (numero % 2 == 0){
            if (band_primer_par == 0){
                mayor_par = numero;
                band_primer_par = true;
            }
            else{
                if(numero > mayor_par){
                    mayor_par = numero;
                }
            }
        }

        cout << "Ingrese un numero: ";
        cin >> numero;
    }

    cout << "Mayor par: " << mayor_par << endl;

    return 0;
}
