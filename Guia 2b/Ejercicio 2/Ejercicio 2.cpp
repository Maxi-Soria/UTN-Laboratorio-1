#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int edad_1, edad_2, edad_3, edad_4, edad_5, promedio =  0, cont_p1 = 0, cont_p3 = 0, cont_p4 = 0;
    float alt_1, alt_2, alt_3, alt_4, alt_5, acu_alt = 0;



    cout << "PERSONA 1" << endl;
    cout << "Edad: ";
    cin >> edad_1;
    cout << "Altura: ";
    cin >> alt_1;
    cout << endl << "PERSONA 2" << endl;
    cout << "Edad: ";
    cin >> edad_2;
    cout << "Altura: ";
    cin >> alt_2;
    cout << endl << "PERSONA 3" << endl;
    cout << "Edad: ";
    cin >> edad_3;
    cout << "Altura: ";
    cin >> alt_3;
    cout << endl << "PERSONA 4" << endl;
    cout << "Edad: ";
    cin >> edad_4;
    cout << "Altura: ";
    cin >> alt_4;
    cout << endl << "PERSONA 5" << endl;
    cout << "Edad: ";
    cin >> edad_5;
    cout << "Altura: ";
    cin >> alt_5;
    cout << endl;

    if (edad_1 > 30 && alt_1 > 1.8){
        acu_alt+=alt_1;
        cont_p1++;
    }
    if (edad_2 > 30 && alt_2 > 1.8){
        acu_alt+=alt_2;
        cont_p1++;
    }
    if (edad_3 > 30 && alt_3 > 1.8){
        acu_alt+=alt_3;
        cont_p1++;
    }
    if (edad_4 > 30 && alt_4 > 1.8){
        acu_alt+=alt_4;
        cont_p1++;
    }
    if (edad_5 > 30 && alt_5 > 1.8){
        acu_alt+=alt_5;
        cont_p1++;
    }
    if (alt_1 >= 1.7 || alt_1 >= 1.8){
        cont_p3++;
    }
    if (alt_2 >= 1.7 || alt_2 >= 1.8){
        cont_p3++;
    }
    if (alt_3 >= 1.7 || alt_3 >= 1.8){
        cont_p3++;
    }
    if (alt_4 >= 1.7 || alt_4 >= 1.8){
        cont_p3++;
    }
    if (alt_5 >= 1.7 || alt_5 >= 1.8){
        cont_p3++;
    }
    if (edad_1 == 20 || edad_1 == 30 || edad_1 == 40){
        cont_p4++;
    }
    if (edad_2 == 20 || edad_2 == 30 || edad_2 == 40){
        cont_p4++;
    }
    if (edad_3 == 20 || edad_3 == 30 || edad_3 == 40){
        cont_p4++;
    }
    if (edad_4 == 20 || edad_4 == 30 || edad_4 == 40){
        cont_p4++;
    }
    if (edad_5 == 20 || edad_5 == 30 || edad_5 == 40){
        cont_p4++;
    }


    cout << "Punto 1: " << cont_p1 << endl;
    cout << "Punto 2: " << acu_alt/5 << endl;
    cout << "Punto 3: " << cont_p3 << endl;
    cout << "Punto 4: " << cont_p4 << endl;
    return 0;
}
