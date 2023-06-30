#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    for (int x=20; x>=1 ; x--){
        cout << x << ", ";
    }

    return 0;
}
