#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int n1, n2, n3, maximo;
    cout << "Ingrese el primer numero: ";
    cin >> n1 ;
    cout << "Ingrese el segundo numero: ";
    cin >> n2 ;
    cout << "Ingrese el tercer numero: ";
    cin >> n3;

    if (n1 > n2){
        maximo = n1;
    }else{
        maximo = n2;
    }
    if (n3 > maximo){
        maximo = n3;
    }

    cout << "El maximo es: " << maximo << endl;

    return 0;
}
