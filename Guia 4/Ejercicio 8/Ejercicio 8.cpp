#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int numero, anterior;
    bool desordenado = false;


    cout << "Ingrese un numero: ";
    cin >> numero;
    anterior =numero;

    while (numero != 0){

        if (anterior > numero){
            desordenado = true;
        }
        anterior = numero;


        cout << "Ingrese un numero: ";
        cin >> numero;
    }

    if (!desordenado){
        cout << "Conjunto Ordenado";
    }
    else{
        cout << "Conjunto No Ordenado";
    }
    return 0;
}
