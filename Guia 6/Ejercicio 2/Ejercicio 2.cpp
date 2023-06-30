#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");
    int vec_num[15], num, i, verif;

    for (i = 0; i < 15; i++){
        cout << "Ingrese un numero: ";
        cin >> vec_num[i];

    }
    cout << "Ingrese el numero verificador: ";
    cin >> verif;

    for (i = 0; i < 15; i++){
        if (vec_num[i] == verif){
            cout << endl << "El numero "<< verif << " esta en la lista" <<  endl;
        }

    }

    return 0;
}
