#include <iostream>
using namespace std;

bool estaEnLaMatriz(int n, int mat[5][5]);
bool EsMatrizSimoniana(int mat[5][5]);

int main() {
    int mat[5][5] = {{1,  2,  3,  4,  6},
                     {5,  4,  18, 10, 11},
                     {1,  1,  1,  1,  1},
                     {9,  8,  4,  2, -5},
                     {10, 10, 10, 10, 10}};


    cout << EsMatrizSimoniana(mat)<< endl;

    return 0;
}

bool estaEnLaMatriz(int n, int mat[5][5]){

    for (int i=0 ; i<5 ; i++ ){
        for (int j=0 ; j<5 ; j++ ){
            if(n==mat[i][j]){
                return true;
            }
        }
    }
    return false;
}

bool EsMatrizSimoniana(int mat[5][5]){

    for (int i=0 ; i<5 ; i++ ){
        int suma=0;
        for (int j=0 ; j<5 ; j++ ){
            suma+=mat[i][j];
        }
        cout << "Fila " << i+1 << ": " << suma << endl;///Esta linea no va, solo es para que veas la suma de cada fila y la puedas buscar en la matriz
        if(estaEnLaMatriz(suma,mat)){
            return true;
        }
    }
    return false;
}




