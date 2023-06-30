#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int num, anterior;
    bool band = 0;

    cin >> num;
    anterior = num;
    for (int x = 0; x <5; x++){

        if (anterior <= num){
            anterior = num;
        }
        else {
            band = 1;
        }

        cin >> num;
    }
    if (band == 0){
        cout << "Conjunto ordenado";
    }
    else {
        cout << "No Ordenado" << endl;
    }
    return 0;
}
