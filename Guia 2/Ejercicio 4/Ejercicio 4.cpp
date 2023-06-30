#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int prim_num, seg_num, res;
    cout << "Ingrese el primer numero: ";
    cin >> prim_num;
    cout << "Ingrese el segundo numero: ";
    cin >> seg_num;

    res = prim_num - seg_num;

    if (res >= 0 ){
        cout << res;
    }
    else{
        cout << res * -1;
    }

    return 0;
}
