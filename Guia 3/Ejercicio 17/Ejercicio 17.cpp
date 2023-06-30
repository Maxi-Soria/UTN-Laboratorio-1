#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int dia, dia_temp_max, cont_neb =0, cont_lluvia = 0;
    float temperatura, mil_lluvia, visibilidad, temp_max, temp_min;

    for (int x = 1; x <= 5; x++){
        cout << "Numero de dia: ";
        cin >> dia;
        cout << "---------------" << endl;
        cout << "Temperatura: ";
        cin >> temperatura;
        cout << "Milimetros de lluvia: ";
        cin >> mil_lluvia;
        cout << "Visibilidad: ";
        cin >> visibilidad;
        cout << endl ;

        //PUNTO A
        if (x == 1){
            temp_max = temperatura;
            temp_min = temperatura;
            dia_temp_max = dia;
        }
        else {
            if (temperatura > temp_max){
                temp_max = temperatura;
                dia_temp_max = dia;
            }
        }
        //PUNTO B
        if (temperatura < temp_min){
            temp_min = temperatura;
        }
        //PUNTO C
        if (visibilidad > 2){
            cont_neb++;
        }
        //PUNTO D
        if (mil_lluvia >= 0){
            cont_lluvia++;
        }

    }
    cout << "Maxima Teperatura: " << temp_max << " Dia: " << dia_temp_max << endl;
    cout << "Amplitud termica: " << temp_max-temp_min << endl;
    cout << "Dias con neblina: " << cont_neb << endl;
    if (cont_lluvia > 2){
        cout << "Quincena lluviosa";
    }
    else {
        cout << "Quincena seca";
    }
    return 0;
}
