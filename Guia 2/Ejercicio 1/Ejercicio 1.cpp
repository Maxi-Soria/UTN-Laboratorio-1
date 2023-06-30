#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero < 0){
        cout << "Es Negativo";
    }else
        if(numero > 0){
            cout << "Es Positivo";
        }else{
            cout << "Es cero";
        }

    return 0;
}
