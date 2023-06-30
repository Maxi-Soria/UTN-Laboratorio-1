#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");
    int sorteado_1;
    int sorteado_2;

    srand(time(0));

    sorteado_1 = (rand() % 100) + 1;
    sorteado_2 = (rand() % 100) + 1;

    while ( sorteado_1 == sorteado_2){
            sorteado_2 = (rand() % 100) + 1;

    }

    cout << "Número 1: " << sorteado_1 << endl;
    cout << "Número 2: " << sorteado_2 << endl;

    return 0;

    int const TAM = 10;

    int numero, vec_comprados[TAM], prim_num = -1, seg_num = -1;

    //PUNTO A
    int vendidos = 0, recaudado = 0;

    //PUNTO B
    int neto = 0;
    bool prim_prem = 0, seg_prem = 0;

    //PUNTO C
    int no_vendidos;

    //PUNTO A pongo el vector en -1
    for (int x = 0; x < TAM; x++){
        vec_comprados[x] = -1;
    }

    cout << "Ingrese el numero que decea comprar: ";
    cin >> numero;

    while (numero != -1){

        if (vec_comprados[numero] == -1){
            vec_comprados[numero] = numero;
            vendidos++;
        }
        else {
            cout << "Es enumero ya no esta disponible " << endl;
        }



        cout << "Ingrese el numero que decea comprar: ";
        cin >> numero;


    }
    //PUNTO A----------------------------------------------------
    recaudado = vendidos * 500;

    cout << endl << "Total recaudado por la venta de los numeros: $" << recaudado << endl << endl;

    prim_num = 3;
    seg_num = 5;

    //PUNTO B----------------------------------------------------

    for (int x = 0; x < TAM; x++){
        if (vec_comprados[x] == prim_num ){
            prim_prem = 1;
        }
        if (vec_comprados[x] == seg_num){
            seg_prem = 1;
        }
    }
    neto = recaudado;
    if (prim_prem && seg_prem){
        neto = neto - 35000;
    }
    else{
        if (prim_prem && !seg_prem){
            neto = neto - 30000;
        }
        else {
            if (!prim_prem && seg_prem){
                neto = neto -5000;
            }
        }
    }
    if (neto <= 0){
        cout << endl << "Total de dinero perdido: $" << neto << endl << endl;
    }
    else {
        cout << endl << "Total de dinero ganado: $" << neto << endl << endl;
    }

    //PUNTO C

    no_vendidos = TAM - vendidos;
    cout << endl << "El porcentaje de no vendidos es: " << no_vendidos * 100 / TAM << " % " << endl <<endl;

    //PUNTO D
    cout << "Numero ganador del primer premio es: " << prim_num << endl;
    if (prim_prem){
        cout << "El numero " << prim_num << " fue vendido " << endl;
    }
    else {
        cout << "El numero " << prim_num << " no fue vendido " << endl << endl;
    }
    cout << "Numero ganador del segundo  premio es: " << seg_num << endl;
    if (seg_prem){
        cout << "El numero " << seg_num << " fue vendido " << endl;
    }
    else {
        cout << "El numero " << seg_num << " no fue vendido " << endl;
    }

    return 0;
}
