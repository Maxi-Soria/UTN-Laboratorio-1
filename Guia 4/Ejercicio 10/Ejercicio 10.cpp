#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int num_artista, integrantes, jornada, duracion;

    ///PUNTO A
    int artista_show_mas_largo, min_show_mas_largo;
    bool bandPA = false;

    ///PUNTO B
    int contJ1 = 0, contJ2 = 0, contJ3 = 0;



    cout << "Ingrese el numero de artista: ";
    cin >> num_artista;

    while (num_artista != 0){

        cout << "integrantes: ";
        cin >> integrantes;
        cout << "Jornada: ";
        cin >> jornada;
        cout << "Duracion del show en minutos: ";
        cin >> duracion;

        switch (jornada){
            case 1:
                if(integrantes == 1){
                    contJ1++;
                }

                if(!bandPA){
                    min_show_mas_largo = duracion;
                    artista_show_mas_largo = num_artista;
                    bandPA = true;
                }
                else{
                    if(duracion>min_show_mas_largo){
                        min_show_mas_largo = duracion;
                        artista_show_mas_largo = num_artista;
                    }
                }

            break;
            case 2:
                if(integrantes == 1){
                    contJ1++;
                }
            break;
            case 3:
                if(integrantes == 1){
                    contJ1++;
                }

            break;

        }
        cout << endl;
        cout << "Ingrese el numero de artista: ";
        cin >> num_artista;

    }

    ///PUNTO A
    cout << "El numero de artista con show mas largo de la jornada 1 es: " >> artista_show_mas_largo << endl;

    ///PUNTo B
    cout << "El numero de solistas de la jornada 1: " << contJ1 << endl;
    cout << "El numero de solistas de la jornada 2: " << contJ2 << endl;
    cout << "El numero de solistas de la jornada 3: " << contJ3 << endl;




    return 0;
}
