#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int num, band = 0, primer_imp, seg_imp;

    for (int x = 0; x < 7; x++){

        cin >> num;

        if (num % 2 != 0){
            if (band == 0){
                primer_imp = num;
                band = 1;
            }
            else {
                if (band == 1){
                    seg_imp = num;
                    band = 2;
                }
            }

        }
    }
    cout << "Primer impar: " << primer_imp << " Segundo impar: " << seg_imp << endl;
    return 0;
}
