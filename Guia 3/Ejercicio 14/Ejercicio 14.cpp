#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int num, divisores = 0;

    cout << "Ingrese un numero: ";
    cin >> num;

    for (int x = 1; x<= num; x++){
        if (num % x == 0){
            divisores++;
        }

    }
    cout << "Dividores: " << divisores;
    return 0;
}
