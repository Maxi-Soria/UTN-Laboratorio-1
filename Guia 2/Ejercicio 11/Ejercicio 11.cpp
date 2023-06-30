#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int n1, n2, n3,n4, n5,cont_pos ;
    cout << "Ingrese el primer numero: ";
    cin >> n1 ;
    cout << "Ingrese el segundo numero: ";
    cin >> n2 ;
    cout << "Ingrese el tercer numero: ";
    cin >> n3;
    cout << "Ingrese el tercer numero: ";
    cin >> n4;
    cout << "Ingrese el tercer numero: ";
    cin >> n5;


    if (n1 > 0){
        cont_pos++ ;
    }
    if (n2  > 0){
        cont_pos++ ;
    }
    if (n3 > 0){
        cont_pos++ ;
    }
    if (n4 > 0){
        cont_pos++ ;
    }
    if (n5 > 0){
        cont_pos++ ;
    }
    cout << "El total de numeros positivos es: " << cont_pos << endl;

    return 0;
}
