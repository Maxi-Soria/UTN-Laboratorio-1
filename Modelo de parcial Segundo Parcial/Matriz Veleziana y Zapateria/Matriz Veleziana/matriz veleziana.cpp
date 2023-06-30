#include <iostream>

using namespace std;

///DECLARACION DE FUNCION

bool EsVeleziana (int mat [5][4]);


int main (){
    setlocale (LC_ALL,"Spanish");

    int matriz[5][4] = {10, 2, -3, -5
                        ,1, 2, 3, 4
                        ,9, 4, -1, 0
                        ,10, 20, 40, 30
                        ,100, 0, 0, 0 };


    cout << EsVeleziana(matriz);


    return 0;
}

///DEFINICION DE LA FUNCION
bool EsVeleziana (int mat [5][4]){
    bool veleziana = false;
    for (int x; x<5; x++){
        bool noCumple = false;
        for (int j=0; j<3; j++){
            if(mat[x][j] >= mat[x][j+1]){
                noCumple = true;
            }
        }
        if(!noCumple){
            return true;
        }
    }
    return false;
}
