#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int lado1, lado2, lado3;
    cout << "Ingrese el primer lado: ";
    cin >> lado1 ;
    cout << "Ingrese el segundo lado: ";
    cin >> lado2 ;
    cout << "Ingrese el tercer lado: ";
    cin >> lado3;


    if (lado1 != lado2 && lado2 != lado3 && lado3 != lado1){
        cout << "Escaleno" << endl;
    }else{
        if (lado1 == lado2 && lado2 == lado3){
            cout << "Equilatero" << endl;
        }else{
            cout << "Isoceses" << endl;
        }
    }
    return 0;
}
