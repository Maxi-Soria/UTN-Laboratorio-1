#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int opcion, centimetros;
    float metros, kilometros, pulgadas, pies;

    do{

    cout << " Menú principal" << endl;
    cout << " -----------------------------" << endl;
    cout << " 1 - Ingresar medida en metros" << endl;
    cout << " 2 - Convertir a centímetros  " << endl;
    cout << " 3 - Convertir a kilómetros   " << endl;
    cout << " 4 - Convertir a pulgadas     " << endl;
    cout << " 5 - Convertir a pies         " << endl;
    cout << " -----------------------------" << endl;
    cout << " 0 - Salir del programa       " << endl;
    cout << "Ingrese una opcion >> ";
    cin >> opcion;
    cout << endl;


        switch (opcion){
        case 1 :
            cout << "Ingrese la medida: ";
            cin >> metros;
        break;
        case 2 :
            centimetros = metros * 100;
            cout << metros << " metros son :" << centimetros << " centimetros" << endl;

        break;
        case 3 :
            kilometros = metros / 1000;
            cout << metros << " metros son :" << kilometros << " kilometros" << endl;
        break;
        case 4 :
            pulgadas = metros * 39.37;
            cout << metros << " metros son :" << pulgadas << " pulgadas" << endl;
        break;
        case 5 :
            pies = metros * 3.281;
            cout << metros << " metros son :" << pies << " pies" << endl;
        break;
        case 0 :
            cout << "Hasta Pronto!!" << endl;
        break;

        }

    } while (opcion != 0);


    return 0;
}
