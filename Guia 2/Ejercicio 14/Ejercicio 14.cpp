#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int anio;
    cout << "Ingrese el año: ";
    cin >> anio;

    if (anio%4 == 0){
        if (anio%100 == 0){
            if (anio%400 == 0){
                cout << "Es bisiesto";
            }else {
                cout << "No es bisiesto";
            }
        }else{
           cout << "Es bisiesto";
        }
    }else{
    cout << "No es bisiesto";
    }

    return 0;
}
