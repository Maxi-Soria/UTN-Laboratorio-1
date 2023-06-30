#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");
    int vec_num[10], num, i;

    for (i = 0; i < 10; i++){
        cout << "Ingrese un numero: ";
        cin >> vec_num[i];

    }

    cout << "POSITIVOS " << endl;
    for (i = 0; i < 10; i++){
        if (vec_num[i] > 0){
            cout << vec_num[i] << " , ";
        }

    }

    return 0;
}
