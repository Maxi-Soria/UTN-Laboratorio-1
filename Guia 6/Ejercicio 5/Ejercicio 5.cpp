#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");
    int const TAM = 20;
    int cont_pos = 0, cont_neg = 0;
    float vec_pos[TAM] = {}, vec_neg[TAM] = {}, num;


    for (int x = 0; x < TAM; x++){
        cout << "Ingrese un numero: ";
        cin >> num;

        if (num > 0){
            vec_pos [cont_pos] = num;
            cont_pos++;
        }

        if (num < 0){
            vec_neg [cont_neg] = num;
            cont_neg++;

        }
    }

    cout << "Cantidad de numeros positivos: " << cont_pos << endl;
    cout << "Cantidad de numeros negativos: " << cont_neg << endl << endl;


    //MUESTRO EL VECTOR DE POSITIVOS
    cout << "Vector de positivos: [" ;
    for (int x = 0; x < TAM; x++){
        if (vec_pos[x] > 0){
            cout << vec_pos[x] << " " ;
        }
    }
    cout << "]" << endl;

    //MUESTRO EL VECTOR DE NEGATIVOS
    cout << "Vector de negativos: [" ;
    for (int x = 0; x < TAM; x++){
        if (vec_neg[x] < 0){
            cout << vec_neg[x] << " " ;
        }
    }
    cout << "]" << endl;

    return 0;
}
