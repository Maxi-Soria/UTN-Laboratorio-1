#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");


    int numero = 1, cont = 0;

    while (cont < 1000){
        if (numero % 15 == 0 && numero % 3 == 0 && numero % 6 != 0 ){
            cont++;
            cout << "Posicion " << cont << ": " << numero << endl;
            }
        numero++;
    }
    return 0;
}
