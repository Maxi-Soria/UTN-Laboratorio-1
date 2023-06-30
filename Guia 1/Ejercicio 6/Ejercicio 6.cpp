#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    float semana_1, semana_2, semana_3, semana_4, mes;

    cout << "Ingrese la recaudacion de la semana n° 1: $ ";
    cin >> semana_1;
    cout << "Ingrese la recaudacion de la semana n° 2: $ ";
    cin >> semana_2;
    cout << "Ingrese la recaudacion de la semana n° 3: $ ";
    cin >> semana_3;
    cout << "Ingrese la recaudacion de la semana n° 4: $ ";
    cin >> semana_4;

    mes = semana_1 + semana_2 + semana_3 + semana_4;

    cout << "Recaucacion promedio por semana: $" << mes / 4 << endl;

    cout << "Porcentaje semana 1: " << semana_1 *100 / mes << "%" << endl;
    cout << "Porcentaje semana 2: " << semana_2 *100 / mes << "%" << endl;
    cout << "Porcentaje semana 3: " << semana_3 *100 / mes << "%" << endl;
    cout << "Porcentaje semana 4: " << semana_4 *100 / mes << "%" << endl;

    return 0;
}
