#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int n1, n2, n3, medio ;
    cout << "Ingrese el primer numero: ";
    cin >> n1 ;
    cout << "Ingrese el segundo numero: ";
    cin >> n2 ;
    cout << "Ingrese el tercer numero: ";
    cin >> n3;

    if (n1 > n2 && n2 > n3 || n3 > n2 && n2 > n1 ){
        medio = n2;
    }else{
        if (n1 > n3 && n3 > n2 || n2 > n3 && n3 > n1){
            medio = n3;
        }else{
            medio = n1;
        }
    }

    cout << "El numero del medio es: " << medio << endl;
    return 0;
}
