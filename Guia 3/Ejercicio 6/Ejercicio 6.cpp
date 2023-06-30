#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int  numero, cont_pos = 0, cont_neg = 0, cont_ceros = 0;

    for (int x = 0 ; x < 10 ; x++){
            cout << "Ingrese un numero: ";
            cin >> numero;
            if (numero > 0){
                cont_pos++;
            }
            else{
                if (numero < 0){
                    cont_neg++;
                }
                else {
                    cont_ceros++;
                }
            }
    }
    cout << "El total de numeros positivos es: " << cont_pos << endl; ;
    cout << "El total de numeros negativos es: " << cont_neg << endl;;
    cout << "El total de numeros ceros es: " << cont_ceros ;
    return 0;
}
