#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int cant, numero, cont_pos = 0;

    cout << "Ingrese la cantidad de numeros deseados: ";
    cin >> cant;

    for (int x = 0 ; x < cant ; x++){
            cout << "Ingrese un numero: ";
            cin >> numero;
            if (numero > 0){
                cont_pos++;
            }

    }
    cout << "El total de numeros positivos es: " << cont_pos;

    return 0;
}
