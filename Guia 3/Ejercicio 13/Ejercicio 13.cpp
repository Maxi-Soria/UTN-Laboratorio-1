#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int num;
    cout << "Ingrese un numero: ";
    cin >> num;


    cout << "Los divisores de " << num << " son: " << endl;
    for (int x = 1; x<= num; x++){
        if (num % x == 0){
            cout << x << " ";
        }
    }
    cout << endl;
    return 0;
}
