#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero % 2 == 0){
        cout << "Es Par";
    }
    else{
        cout << "Es Impar";
    }


    return 0;
}
