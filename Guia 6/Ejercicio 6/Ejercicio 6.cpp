#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int  vec[5] = {}, max_num, max_pos;

    ///CARGO EL VECTOR 5  9  12  7 4
    for (int i=0 ; i<5 ; i++ ){
        cin>>vec[i];
    }

    ///BUSCO EL MAXIMO Y LA POSICION
    max_num = vec[0];
    max_pos = 0;
    for (int i=1 ; i<5 ; i++ ){
        if(vec[i] > max_num){
            max_num = vec[i];
            max_pos = i;
        }
    }


    ///REPLAZO DESDE LA POSICION DEL MAXIMO EN ADELANTE
    for (int i=0 ; i<5 ; i++ ){
        if(i >= max_pos){
            vec[i] = vec[i+1];
        }
    }

    ///MUESTRO EL VECTOR
    for (int i=0 ; i<4 ; i++ ){
       cout << vec[i] << " ";
    }
    cout << endl;



    return 0;


}





















//    //CARGAR VECTOR
//    for (int x = 0; x < 10; x++){
//        cin >> vec_num[x];
//        if(x==0){
//            max_num=vec_num[x];
//            max_pos = x;
//        }
//        else{
//            if(vec_num[x] > max_num){
//                max_num = vec_num[x];
//            }
//        }
//    }
//    cout << "MAx" << max_num << endl;
//    cout << "pos" << max_pos << endl;
//
//
//    //PISO EL VALOR DEL MAXIMO CON EL SIGUIENTE DE Y REPITO HASTA LA ULTIMA POSICION
//    for (int x = 0; x < 9; x++){
//        if(vec_num[x] == max_num){
//            vec_num[x] = vec_num[x + 1];
//            max_num = vec_num[x];
//        }
//        cout << vec_num[x] << " ";
//    }
//
//
//
//    return 0;

