#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    for (int x = 2; x <= 1000; x++){
        bool es_primo = true;
        for (int j= 2; j < x; j++){
            if (x % j == 0){
                es_primo = false;
            }
        }
        if (es_primo){
            cout << x  <<  endl;
        }
    }
    return 0;
}
