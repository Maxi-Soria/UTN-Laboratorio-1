#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int Prim_mayor, seg_mayor, num;
    bool band_seg_mayor = 0;

    for (int x = 0; x < 5; x++){
        cin >> num;

        if (x == 0){
            Prim_mayor = num;
        }
        else{
            if (num > Prim_mayor){
                seg_mayor = Prim_mayor;
                Prim_mayor = num;
                band_seg_mayor = 1;
            }
            else {
                if (band_seg_mayor = 0){
                    seg_mayor = num;
                    band_seg_mayor = 1;
                }
                else{
                    if (num > seg_mayor){
                        seg_mayor = num;
                    }
                }
            }
        }

    }
    cout << "Primer Mayor: " << Prim_mayor << endl;
    cout << "Segundo Mayor: " << seg_mayor << endl;

    return 0;
}
