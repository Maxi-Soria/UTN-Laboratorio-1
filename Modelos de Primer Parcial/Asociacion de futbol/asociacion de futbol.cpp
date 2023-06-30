#include <iostream>
#include <clocale>

using namespace std;


int main (){
    setlocale (LC_ALL,"Spanish");

    int num_torn, num_equipo, ganados, empatados, perdidos, g_favor, g_contra, punt_descontados;

    int const CANTIDAD_TORNEOS = 3;

    //PUNTO A
    int puntos , punt_max, equipo_campeon;
    bool band_punt = 0;

    //PUNTO B
    bool bandPuntoB = false;
    int torneosSinSanciones = 0;

    //PUNTO C
    int diferenciaDeGoles = 0;

    //PUNTO D
    bool bandPuntoD = false;
    int eqMenosEmpates, cantEmpates,torneoMenosEmpates;


    for (int x = 0; x < CANTIDAD_TORNEOS; x++){

        cout << "NUMERO DE TORNEO : ";
        cin >> num_torn;
        cout << "Numero de equipo : ";
        cin >> num_equipo;

        band_punt = 0;

        while (num_equipo != 0){
            cout << "Partidos Ganados : ";
            cin >> ganados;
            cout << "Partidos Empatado : ";
            cin >> empatados;
            cout << "Partidos Perdidos : ";
            cin >> perdidos;
            cout << "Goles a favor : ";
            cin >> g_favor;
            cout << "Goles en contra : ";
            cin >> g_contra;
            cout << "Puntos descontados : ";
            cin >> punt_descontados;
            cout << endl;


            //PUNTO A

            puntos = (ganados*3 + empatados*1) - punt_descontados;

            if (!band_punt){
                punt_max = puntos;
                equipo_campeon = num_equipo;
                band_punt = 1;
            }
            else {
                if (puntos > punt_max){
                    punt_max = puntos,
                    equipo_campeon = num_equipo;
                }

            }

            //PUNTO B
            if(punt_descontados != 0){
                bandPuntoB = true;
            }

            //PUNTO C
            if (num_equipo == 15){
                diferenciaDeGoles += g_favor - g_contra;
            }


            //PUNTO D
            if(empatados > 0){
                if(!bandPuntoD){
                    eqMenosEmpates = num_equipo;
                    cantEmpates = empatados;
                    torneoMenosEmpates = num_torn;
                    bandPuntoD = true;
                }
                else{
                    if(empatados < cantEmpates){
                        eqMenosEmpates = num_equipo;
                        cantEmpates = empatados;
                        torneoMenosEmpates = num_torn;
                    }
                }



            }

            cout << "Numero de equipo : ";
            cin >> num_equipo;

        }

        if(!bandPuntoB){
            torneosSinSanciones++;
        }



        cout << endl <<"Campeon del torneo " << num_torn << " es el equipo " << equipo_campeon << " con " << punt_max << " puntos" << endl;



    }
        cout << "La cantidad de torneos sin equipos sancionados es: " << torneosSinSanciones << endl;
        cout << "La diferencia de goles del equipo numero 15 es: " << diferenciaDeGoles << endl;
        cout << "Equipo con menos empates " << eqMenosEmpates << " con " << cantEmpates << " empates, durante el torneo " << torneoMenosEmpates << endl;


    return 0;
}

/*
CARGA MASIVA
23 2 3 0 2 6 2 10
 3 2 0 1 4 2 5
 5 1 0 1 5 1 10
 0
24 15 4 10 2 9 2 10
 4 6 0 1 3 1 4
 6 5 0 3 5 2 3
 8 2 2 2 6 1 4
 9 3 2 1 4 2 1
 0
25 7 5 3 2 2 3 3
 2 1 1 3 5 1 5
 3 5 2 3 3 3 6
 6 5 4 2 5 3 8
 0
*/
