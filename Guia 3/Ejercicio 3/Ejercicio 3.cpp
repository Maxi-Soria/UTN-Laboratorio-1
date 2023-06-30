#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int num;

    cin >> num;

    for (int x=2; x<num ; x++){
        cout << x << ", ";
    }

    return 0;
}
