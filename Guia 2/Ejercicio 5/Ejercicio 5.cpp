#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    float importe;
    cout << "Ingrese el importe de la venta: ";
    cin >> importe;

    if (importe < 100){
        importe = importe * 0.95;
    }
    else{
        if (importe <= 500){
            importe = importe * 0.90;
        }else{
            importe = importe * 0.85;
        }
    }

    cout << "El importe a abonar es: $" << importe;

    return 0;
}
