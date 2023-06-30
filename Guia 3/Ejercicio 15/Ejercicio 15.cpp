#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int num;
    bool band = false;

    cout << "Ingrese un  numero: ";
    cin >> num;

    for (int x = 2; x < num; x++){

        if (num % x == 0){
            band = true;
        }

    }
    if (!band){
        cout << "Es Primo " << endl;
    }

    return 0;
}
