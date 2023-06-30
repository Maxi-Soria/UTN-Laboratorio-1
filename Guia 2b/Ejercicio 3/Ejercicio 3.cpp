#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int blancos = 45, negros =50, marrones = 40, grises = 49;
    int cantidad, tipo, tot_b, tot_n, tot_m, tot_g;

    cout << "PRIMERA VENTA " << endl;
    cout << "Cantidad de conejos: ";
    cin >> cantidad;
    cout << "Tipo de conejo: ";
    cin >> tipo;


    switch (tipo){
        case 1:
            blancos = blancos-cantidad;
        break;
        case 2:
            negros = negros-cantidad;
        break;
        case 3:
            marrones = marrones-cantidad;
        break;
        case 4:
            grises = grises-cantidad;
        break;
    }
    cout << "SEGUNDA VENTA " << endl;
    cout << "Cantidad de conejos: ";
    cin >> cantidad;
    cout << "Tipo de conejo: ";
    cin >> tipo;


    switch (tipo){
        case 1:
            blancos = blancos-cantidad;
        break;
        case 2:
            negros = negros-cantidad;
        break;
        case 3:
            marrones = marrones-cantidad;
        break;
        case 4:
            grises = grises-cantidad;
        break;
    }
    cout << "TERCERA VENTA " << endl;
    cout << "Cantidad de conejos: ";
    cin >> cantidad;
    cout << "Tipo de conejo: ";
    cin >> tipo;


    switch (tipo){
        case 1:
            blancos = blancos-cantidad;
        break;
        case 2:
            negros = negros-cantidad;
        break;
        case 3:
            marrones = marrones-cantidad;
        break;
        case 4:
            grises = grises-cantidad;
        break;
    }

    tot_b = 45 - blancos;
    tot_n = 50 - negros;
    tot_m = 40 - marrones;
    tot_g = 49 - grises;

    cout << endl;
    cout << "El total de conejos vendidos es: " << tot_b + tot_n + tot_m + tot_g << endl;
    cout << "Quedaron Blanos: " << blancos << " Negros: " << negros << " Marrones: " << marrones << " Grises: " << grises << endl;

    if (blancos == 45){
        cout << "no se vendieron blancos";
    }
    if (negros == 50){
        cout << "no se vendieron blancos";
    }
    if (marrones == 40){
        cout << "no se vendieron marrones";
    }
    if (grises == 49){
        cout << "no se vendieron grises";
    }
    return 0;
}
