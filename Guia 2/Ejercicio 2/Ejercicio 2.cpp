#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int prim_num, seg_num;

    cout << "Ingrese el primer numero: ";
    cin >> prim_num;
    cout << "Ingrese el segundo numero: ";
    cin >> seg_num;

    if (prim_num % seg_num == 0){
        cout << "El numero " << prim_num << " es multiplo de " << seg_num ;
    }else {
        cout << "no es multiplo;";
    }

    return 0;
}
