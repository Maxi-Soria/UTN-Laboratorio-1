#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int n1, n2, n3;
    cout << "Ingrese el primer numero: ";
    cin >> n1 ;
    cout << "Ingrese el segundo numero: ";
    cin >> n2 ;
    cout << "Ingrese el tercer numero: ";
    cin >> n3;


    if (n1 == n2 && n2 == n3){
        cout << "Son iguales";
    }

    return 0;
}
