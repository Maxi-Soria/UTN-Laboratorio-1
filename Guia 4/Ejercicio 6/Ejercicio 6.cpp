#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int numero, cont_neg = 0, cont_terna = 0, cont_par = 0, acu_terna = 0;


    while (cont_par < 5){

    cout << "Ingrese un numero: ";
    cin >> numero;

        if (numero % 2 == 0){
            cont_par++;
        }
            if(numero < 0){
                acu_terna++;
                if(acu_terna == 3){
                    cont_terna++;
                }else{
                    if(acu_terna == 4){
                        cont_terna++;
                        acu_terna = 2;
                    }
                }
            }
            else{
                acu_terna = 0;
            }
        }
        cout << "Contador de ternas: " << cont_terna << endl;

    return 0;
}

//    cin >> numero;
//
//    if (numero % 2 == 0){
//        cont_par = 1;
//    }
//
//    while (cont_par < 5){
//        if (numero < 0){
//            cont_neg++;
//            if (cont_neg == 3){
//                cont_terna++;
//                cont_neg = 0;
//            }
//        }
//        else{
//            cont_neg = 0;
//        }
//
//        cin >> numero;
//        if (numero % 2 == 0){
//        cont_par++;
//        }
//
//    }
//    cout << "Ternas neg: " << cont_terna << endl;
