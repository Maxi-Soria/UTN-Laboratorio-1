#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int cateoria, antiguedad, cont_cat_1=0, cont_cat_2=0, cont_cat_3=0, x;
    int acu_sueldo_1=0, acu_sueldo_2=0, acu_sueldo_3=0, sueldo, sueldo_maximo, cat_sueldo_max;
    bool band;

    for (x = 0; x < 50; x++){
        cout << "EMPLEADO N°" << x+1 << endl;
        cout << "-----------" << endl;

        cout << "Categoria: ";
        cin >> cateoria;
        cout << "Antiguedad: ";
        cin >> antiguedad;
        cout << endl;

        switch (cateoria){
        case 1:
            sueldo = 38000 +  (antiguedad * 1200);
            cont_cat_1++;
            acu_sueldo_1 += sueldo;
        break;
        case 2:
            sueldo = 70000 + (antiguedad * 1200);
            cont_cat_2++;
            acu_sueldo_2 += sueldo;
        break;
        case 3:
            sueldo = 105000 + (antiguedad * 1200);
            cont_cat_3++;
            acu_sueldo_3 += sueldo;
        break;

        }

        if (x == 0){
            sueldo_maximo = sueldo;
            cat_sueldo_max = cateoria;
        }
        else {
            if (sueldo > sueldo_maximo){
                sueldo_maximo = sueldo;
                cat_sueldo_max = cateoria;
            }
        }


    }
    cout << "Empleados de categoria 1: " << cont_cat_1 << endl;
    cout << "Empleados de categoria 2: " << cont_cat_2 << endl;
    cout << "Empleados de categoria 3: " << cont_cat_3 << endl << endl;

    cout << "Sueldo total categoria 1: " << acu_sueldo_1 << endl;
    cout << "Sueldo total categoria 2: " << acu_sueldo_2 << endl;
    cout << "Sueldo total categoria 3: " << acu_sueldo_3 << endl << endl;


    cout << "Sueldo promedio: " << ( acu_sueldo_1 + acu_sueldo_2 + acu_sueldo_3 )/50 << endl << endl;

    cout << "Sueldo maximo: " << sueldo_maximo << endl;
    cout << "categoria del sueldo maximo: " << cat_sueldo_max << endl;

    return 0;
}
