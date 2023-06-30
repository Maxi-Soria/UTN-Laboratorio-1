#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int numero, cont_pos = 0, cont_neg = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    while (numero != 0){

        if (numero >= 0){

            cont_pos++;
        }
        else {
            cont_neg++;
        }

        cout << "Ingrese un numero: ";
        cin >> numero;

    }
    cout << "positivos: " << cont_pos << " Negativos: " << cont_neg << endl;

    return 0;
}
