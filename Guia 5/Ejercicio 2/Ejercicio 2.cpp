#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int cliente, sucursal, cont_mas_de_mil = 0, may_cli = 0, may_suc, mayor, aux_suc;
    int op_suc1 = 0, op_suc2 = 0, op_suc3 = 0, total_op, cont_depo3 = 0, cont_depo1 = 0, cont_depo2 = 0;
    char codigo;
    float monto, may_monto, depo_A = 0, depo_B = 0, depo_C = 0;
    bool band_prim_extr = 0;

    cout << "Ingrese numero de cliente: ";
    cin >> cliente;

    while (cliente != 0){

        cout << "Ingrese sucursal: ";
        cin >> sucursal;
        cout << "Ingrese d/ deposito o e/ extraccion: ";
        cin >>codigo;
        cout << "Ingrese el monto: ";
        cin >> monto;
        cout << endl;

        switch (sucursal){
        case 1:
            op_suc1++; ///PUNTO C
            if (codigo == 'd'){
                depo_A+=monto; ///PUNTO C y D
                cont_depo1++;
            }

        break;
        case 2:
            op_suc2++; ///PUNTO C
            if (codigo == 'd'){
                depo_B+=monto; ///PUNTO C y D
                cont_depo2++;
            }
        break;
        case 3:
            op_suc3++; ///PUNTO C y D
            if (codigo == 'd'){
                depo_C+=monto;
                cont_depo3++;  ///PUNTO E
            }
        break;
        }

        ///PUNTO A
        if (codigo == 'd' && monto > 1000){
            cont_mas_de_mil++;
        }

        ///PUNTO B
        if (band_prim_extr == 0 && codigo == 'e'){
            may_monto = monto;
            may_cli = cliente;
            may_suc = sucursal;
            band_prim_extr = 1;
        }
        else {
            if (monto > may_monto && codigo == 'e'){
                may_monto = monto;
                may_cli = cliente;
                may_suc = sucursal;
            }
        }


        cout << "Ingrese numero de cliente: ";

    cin >> cliente;

    }
    ///PUNTO F
    if (cont_depo1 > cont_depo2){
        mayor = cont_depo1;
        aux_suc = 1;
    }
    else{
        mayor = cont_depo2;
        aux_suc = 2;
    }
    if (cont_depo3 > mayor){
        mayor = cont_depo3;
        aux_suc = 3;
    }


    total_op = op_suc1 + op_suc2 + op_suc3;

    cout << endl << "Cantidad de depositos mayores a $1000: " << cont_mas_de_mil << endl << endl;

    cout << "La extraccion de mayor monto fue del cliente: " << may_cli << " En la sucursal: " << may_suc << endl;

    cout << "Porcentaje de operaciones de la sucursal 1: " << op_suc1 * 100 / total_op << endl;
    cout << "Porcentaje de operaciones de la sucursal 2: " << op_suc2 * 100 / total_op << endl;
    cout << "Porcentaje de operaciones de la sucursal 3: " << op_suc3 * 100 / total_op << endl << endl;

    cout << "Total de depositos en la sucursal 1: " << depo_A << endl;
    cout << "Total de depositos en la sucursal 2: " << depo_B << endl;
    cout << "Total de depositos en la sucursal 3: " << depo_C << endl << endl;

    cout << "Cantidad de depositos en la sucursal tigre: " << cont_depo3 << endl << endl;

    cout << "Numero de sucursal con mas depositos: " << aux_suc << endl;
    return 0;
}
