#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    for (int x=1; x<=20 ; x+=3){
        cout << x << ", ";
    }


    return 0;
}
