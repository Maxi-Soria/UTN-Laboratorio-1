#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    bool b_sueldo;
    int legajo, leg_max_sueldo;
    float sueldo, max_sueldo;

    for (int x = 0; x < 5; x++){
        cout << "legajo: ";
        cin >> legajo;
        cout << "Sueldo: $";
        cin >> sueldo;
        cout << endl;

        if (b_sueldo == 0){
            max_sueldo = sueldo;
            leg_max_sueldo = legajo;
            b_sueldo = 1;
        }
        else{
           if (sueldo > max_sueldo){
                max_sueldo = sueldo;
                leg_max_sueldo = legajo;
           }
        }
    }
    cout << "Maximo Sueldo: $" << max_sueldo << endl;
    cout << "Legajo del maximo sueldo: " << leg_max_sueldo;
    return 0;
}
