#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int n1,n2,n3,n4,rinde_final = 0;

    cout << "Ingrese la primer nota: ";
    cin >> n1;
    cout << "Ingrese la segunda nota: ";
    cin >> n2;
    cout << "Ingrese la tercer nota: ";
    cin >> n3;
    cout << "Ingrese la cuarta nota: ";
    cin >> n4;

    if (n1>=7 && n2>=7 && n3>=7 && n4>=7){
        cout << "Promociona";
    }else{
        if (n1 >= 4){
            rinde_final++;
        }
        if (n2 >= 4){
            rinde_final++;
        }
        if (n3 >= 4){
            rinde_final++;
        }
        if (n4 >= 4){
            rinde_final++;
        }
        if (rinde_final >= 3){
            cout << "Rinde Fianl";
        }
        else{
            if (rinde_final >= 1){
                cout << "Recupera Parcial";
            }
            else{
                cout << "Recursa la Materia";
            }
            }
        }
    return 0;
}
