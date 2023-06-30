#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");
    int const TAM= 15;

    int vec_num[TAM], i, minimo, cont_iguales = 0;

    for (i = 0; i < TAM; i++){
        cout << "Ingrese un numero: ";
        cin >> vec_num[i];
    }
    minimo = vec_num[0];

    for (i = 1; i < TAM; i++){

        if(vec_num[i] == minimo){
            cont_iguales++;
        }

        if (vec_num[i] < minimo){
            minimo = vec_num[i];
            cont_iguales = 0;
            }
        }



    cout << "El menor es: " << minimo << ", cantidad de apariciones: " << cont_iguales +1 << endl;

    return 0;
}


