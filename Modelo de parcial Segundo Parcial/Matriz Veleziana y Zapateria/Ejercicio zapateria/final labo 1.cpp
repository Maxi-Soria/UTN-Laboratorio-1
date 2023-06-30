#include <iostream>
#include <clocale>

using namespace std;


int main (){

    setlocale (LC_ALL,"Spanish");

    int sucursal, mes, talle;
    float importe;
    char tipo;

    //PUNTO A
    int cont_PA[8] = {};

    //PUNTO B
    bool vec_vent_Z [8] = {};
    bool vec_vent_P [8] = {};
    int cont_PB = 0;

    //PUNTO C
    int mat_PC[6][4] = {}, pos_PC, mas_vendido, tipo_mas;
    char tipo_mas_vend ;

    cout << "Ingrese sucursal: ";
    cin >> sucursal;

    while (sucursal != 0){
        cout << "Ingrese mes";
        cin >> mes;
        cout << "Tipo de calzado: ";
        cin >> tipo;
        cout << "Ingrese talle";
        cin >> talle;
        cout << "Ingrese importe: ";
        cin >> importe;
        cout << endl;

        //PUNTO A
        if (talle > 40){
            cont_PA[sucursal-1]++;
        }

        //PUNTO B
        if (tipo == 'Z'){
            vec_vent_Z[sucursal-1]  = true;
        }
        if (tipo == 'P'){
            vec_vent_P[sucursal-1] = true;
        }

        //PUNTO C
        if (tipo == 'X'){
            pos_PC = 0;
        }
        if (tipo == 'Z'){
            pos_PC = 1;
        }
        if (tipo == 'P'){
            pos_PC = 2;
        }
        if (tipo == 'O'){
            pos_PC = 3;
        }


        mat_PC[mes-6][pos_PC]++;




        cout << "Ingrese sucursal: ";
        cin >> sucursal;

    }

    //PUNTO A
    cout << "Cantidad de calzados mayores a 40 vendidos por sucursal: " << endl;
    for (int x = 0; x < 8; x++){
        cout << "sucursal: " << x+1 << " vendio " << cont_PA[x] << endl;

    }

    //PUNTO B
    for (int x = 0; x < 8; x++){
        if (vec_vent_Z[x] && !vec_vent_P[x]){
            cont_PB++;
        }
    }

    cout << "Cantidad de sucursales que vendieron zapatos pero no pantuflas es: " << cont_PB << endl;

    //PUNTO C

   mas_vendido = 0;
    for (int x = 0; x < 6; x++){
        mas_vendido = 0;
        tipo_mas = 0;
        for (int j = 0; j<4; j++){
            if (mat_PC[x][j] > mas_vendido){
                mas_vendido = mat_PC[x][j];
                tipo_mas = j;
            }
                if (tipo_mas == 0){
                    tipo_mas_vend = 'X';
                }
                if (tipo_mas == 1){
                    tipo_mas_vend = 'Z';
                }
                if (tipo_mas == 2 ){
                    tipo_mas_vend = 'P';
                }
                if (tipo_mas == 3){
                    tipo_mas_vend = 'O';
                }
        }
        cout << "El calzado mas vendido del mes " << x+6 << " es: " << tipo_mas_vend << endl;
    }

    return 0;

}

/*
CARGA MASIVA
3 7 X 35 100
5 8 Z 40 200
4 6 Z 38 300
6 9 P 42 200
8 8 P 41 100
1 9 O 39 300
5 11 P 38 500
6 10 O 42 100
3 7 X 40 200
4 7 Z 20 100
6 6 P 42 200
8 8 Z 43 300
7 9 Z 40 400
4 7 P 28 200
2 10 Z 29 100
6 6 P 41 200
5 10 X 42 300
3 6 P 43 200
5 6 Z 44 300
4 9 O 26 100
5 10 Z 39 300
0
*/
