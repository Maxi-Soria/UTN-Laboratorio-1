#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int nuevo_num, aux, vec_num[10];


    //CARGO EL VECTOR DEJANDO LIBRE LA POSICION 0
    for (int x = 1; x < 10; x++){
        cout << "Ingrese un numero: ";
        cin >> vec_num[x];
    }

    //INGRESO EL NUEVO NUMERO Y LO GUARDO EN LA POSICION 0 DEL VECTOR
    cout << "Nuevo numero: ";
    cin >>  vec_num[0];

    //RECORRO EL VECTOR PARA ACOMODAR EL NUEVO NUMERO
    for (int x = 0; x < 9; x++){
        if (vec_num[x] > vec_num[x+1]){
            aux = vec_num[x+1];
            vec_num[x+1] = vec_num[x];
            vec_num[x] = aux;

        }
    }

    //MUESTRO EL VECTOR CON EL NUEVO NUMERO
    for (int x = 0; x < 10; x++){
        cout << vec_num [x] << ", ";
    }
    return 0;
}
