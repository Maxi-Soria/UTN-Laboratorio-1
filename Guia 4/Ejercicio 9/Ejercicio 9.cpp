#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int legajo_est, codigo_materia, cont_est = 0, leg_men_nota, cont_mat_10 = 0, aprobado = 0, menor_nota;
    float nota, acu_nota = 0, porc_aprob;
    bool band_prim_nota = false;

    cout << "Ingrese el legajo: ";
    cin >> legajo_est;

    while (legajo_est < 30000){

        cout << "Ingrese el codigo de la materia: ";
        cin >> codigo_materia;
        cout << "Ingrese la nota: ";
        cin >> nota;

        //La nota promedio entre todos los estudiantes.
        cont_est++;
        acu_nota+=nota;

        //El legajo del estudiante con menor nota.
        if (!band_prim_nota){
            menor_nota = nota;
            leg_men_nota = legajo_est;
            band_prim_nota = true;
        }
        else{
            if (nota < menor_nota){
                menor_nota = nota;
                leg_men_nota = legajo_est;
            }
        }

        //La cantidad de exámenes rendidos para la materia 10.
        if (codigo_materia == 10){
            cont_mat_10++;
        }

        //El porcentaje de aprobados y no aprobados.
        if (nota >= 6){
            aprobado++;
        }

        cout << endl;
        cout << "Ingrese el legajo: ";
        cin >> legajo_est;



    }
    porc_aprob = aprobado*100/cont_est;


    cout << "Nota Promedio entre todos...............: " << acu_nota/cont_est << endl;
    cout << "Legajo de menor nota....................: " << leg_men_nota << endl;
    cout << "Examenes rendidos para la Materia 10....: " << cont_mat_10 << endl;
    cout << "Porcentaje de aprobados.................: " << porc_aprob << "%" << endl;
    cout << "Porcentaje de desaprobados..............: " << 100 - porc_aprob << "%" << endl;
    return 0;
}
