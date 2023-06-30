#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int num, ultimo = 0, anteultimo = 0;

    cout << "Ingrese un numero: ";
    cin >> num;

    while (num % 7 != 0){
        if (num % 2 != 0){
            anteultimo = ultimo;
            ultimo = num;
        }

        cout << "Ingrese un numero: ";
        cin >> num;
    }
    if(ultimo == 0 && anteultimo == 0){
        cout << "No habia numeros impares" << endl;;
    }
    else{
        if(ultimo != 0 && anteultimo == 0){
            cout << "Solo habia un impar y es: " << ultimo << endl;
        }
        else{
            cout << "El anteultimo impar es: " << anteultimo << ", y el ultimo es: " << ultimo << endl;
        }
    }



    return 0;
}
