#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int Filas = 5;
    int Columnas = 3;
    int mat[5][3] = {
        {10, 20, 0},
        {19, 50, 60},
        {7, 80, 9},
        {10, 1, 12},
        {1, 3, 1}
    };

    cout << " ____________________________________________________" << endl;
    cout << "|          |  Sucursal 1 |  Sucursal 2 | Sucursal  3 |\n";
    cout << "|__________|_____________|_____________|_____________|" << endl;

    for (int i = 0; i < Filas; i++) {
        cout << "|Articulo " << i + 1 << "|";
        for (int j = 0; j < Columnas; j++) {
            cout <<setw(8) << mat[i][j] << setw(6) << "|";
        }
        cout << endl;
        cout << "|__________|_____________|_____________|_____________|" << endl;
    }

    return 0;
}



