#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int max_neg, min_pos, num, b_pos = 0, b_neg = 0;

    for (int x = 0; x < 10; x++){
        cin >> num;
        if (num >= 0){
            if (b_pos == 0){
                min_pos = num;
                b_pos = 1;
            }
            else{
                if (num < min_pos){
                    min_pos = num;
                }
            }
        }
        else{
            if (b_neg == 0){
                max_neg = num;
                b_neg = 1;
            }
            else{
                if (num > max_neg){
                    max_neg = num;
                }
            }
        }
    }
    cout << "Maximo de los negativos: " << max_neg << endl;
    cout << "Minimo de los positivos: " << min_pos << endl;
    return 0;
}
