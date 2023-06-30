#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int n1, n2, aux;

    cout << "Ingrese n1: ";
    cin >> n1;
    cout << "Ingrese n2: ";
    cin >> n2;

    if (n1 > n2){
        aux = n1;
        n1 = n2;
        n2 = aux;
    }

    for (int x = n1+1 ; x < n2 ; x++){
        cout << x << ", ";
    }

    cout << endl;
    return 0;
}
