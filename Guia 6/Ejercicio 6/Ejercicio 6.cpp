#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int num, vec_num[10] = {}, max_num, max_pos;


    //CARGAR VECTOR
    for (int x = 0; x < 10; x++){
        cin >> vec_num[x];
        if(x==0){
            max_num=vec_num[x];
            max_pos = x;
        }
        else{
            if(vec_num[x] > max_num){
                max_num = vec_num[x];
            }
        }
    }
    cout << "MAx" << max_num << endl;
    cout << "pos" << max_pos << endl;


    //PISO EL VALOR DEL MAXIMO CON EL SIGUIENTE DE Y REPITO HASTA LA ULTIMA POSICION
    for (int x = 0; x < 9; x++){
        if(vec_num[x] == max_num){
            vec_num[x] = vec_num[x + 1];
            max_num = vec_num[x];
        }
        cout << vec_num[x] << " ";
    }



    return 0;
}
