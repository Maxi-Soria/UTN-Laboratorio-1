#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int num, mayor, menor, dif, cont=1;

    cout << "Ingrese un numero: ";
    cin >> num;

    mayor = num;
    menor = num;
    dif = mayor - menor;

    while (dif < 10){
        cout << "Ingrese un numero: ";
        cin >> num;
        cont++;
        if (num > mayor){
            mayor = num;
        }
        else {
            if (num < menor){
                menor = num;
            }
        }
        dif = mayor - menor;

    }
        cout <<"Total de numeros ingresados: "<< cont<< endl;

    return 0;
}
