#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    float costo;
    int cant_horas;
    char tipo;
    bool urgencia;

    cout << "Ingrese la cantidad de horas: ";
    cin >> cant_horas;
    cout << "seleccione el lenguaje: \n'C' > para c/c++ \n'#' > para C# \n'P' > para pyton \n'G' > para Go \n>";
    cin >> tipo;
    cout << "Es Urgente?? 1-SI / 0-NO: ";
    cin >> urgencia;

    switch (tipo){

    case 'C':
        costo = 2500;
    break;
    case '#':
        costo = 2100;
    break;
    case 'P':
        costo = 1400;
    break;
    case 'G':
        costo = 2000;
    break;
    default:
        cout << "Opcion no valida \n";

    }

    costo = costo * cant_horas;

    if (urgencia){
        costo = costo*2.2;
    }
    cout << "El costo del proyecto es: $" << costo << endl;
    return 0;
}
