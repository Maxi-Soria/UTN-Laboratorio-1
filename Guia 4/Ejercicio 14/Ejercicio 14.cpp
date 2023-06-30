#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int asistentes, aulas, exedente;

    cout << "Ingrese el total de asistentes: ";
    cin >> asistentes;


    if (asistentes < 600){
        aulas = asistentes /60;
        exedente = asistentes - (aulas * 60);
        if (exedente > 0){
            aulas++;
        }
        cout << "El total de aulas necesarias es: " << aulas << endl;
    }
    else{
        cout << "Las 10 aulas no son suficientes" << endl;
    }



    return 0;
}
