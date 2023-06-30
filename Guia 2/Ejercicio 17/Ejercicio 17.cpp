#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int kw, costo;

    cout << "Ingrese el total de kilovatios consumidos: ";
    cin >> kw;

    cout << endl;

    if (kw <= 100){
       costo = kw*10;
    }
    else{
        if (kw <= 200){
            costo = 1000+(kw-100)*12;
        }
        else{
            costo = 2200+(kw-200)*15;
        }
    }
    cout << "El costo a abonar es: $" << costo << endl;

    return 0;
}
