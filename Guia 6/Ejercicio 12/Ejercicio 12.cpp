#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int const CANT_PROVINCIAS = 8;
    int const CANT_ZONA = 3;

    int provincia, zona, cont = 0;
    bool vec_prov[CANT_PROVINCIAS] = {}, mat_prov_zona[CANT_PROVINCIAS][CANT_ZONA] = {};

    for (int x = 0; x < CANT_PROVINCIAS; x++){

        cout << "Ingrese la provincia: ";
        cin >> provincia;
        cout << "Igrese la zona: ";
        cin >> zona;

        mat_prov_zona[provincia-1][zona-1] = 1;


        }

        for (int x = 0; x < CANT_ZONA ; x++){
            cont = 0;
            for (int i = 0; i < CANT_PROVINCIAS; i++){
                if (mat_prov_zona[i][x]){
                    vec_prov[i] = i;
                    cont++;
                    }

            }
            cout << "zona: " << x+1;
            if (cont > 2){
                for (int m = 0; m < CANT_PROVINCIAS; m++){
                    if (vec_prov[m] ){
                        cout << m+1 << " ";
                    }
                }
            cout << endl << cont << endl;
            }
        }
    return 0;
}
