#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int edad;
    char color, sexo;

    //PUNTO A
    int vec_cant_color[4] = {}, maximo;
    char vec_color[4] = {'n', 'a', 'b', 'o'}, max_color;

    //PUNTO B
    int vec_decadas[10] = {};


    cout << "Ingrese la edad: ";
    cin >> edad;

    while (edad != 0){
        cout << "INgrese el color: ";
        cin >> color;
        cout << "Ingrese el sexo: ";
        cin >> sexo;
        cout << endl;

        //PUNTO A
        if (sexo == 'm'){
            for (int x = 0; x < 4; x++){
                if (vec_color[x] == color){
                    vec_cant_color[x]++;
                }
            }
        }

        //PUNTO B
        vec_decadas[edad/10]++;

        cout << "Ingrese la edad: ";
        cin >> edad;

    }

    //PUNTO A
    maximo = vec_cant_color[0];
    max_color = vec_color[0];
    for (int x = 1; x < 4; x++){
        if (vec_cant_color[x] > maximo){
            maximo = vec_cant_color[x];
            max_color = vec_color[x];
        }
    }

    //PUNTO B
    for (int x = 0; x < 10; x++){
        cout << "Cantidad de votantes decada " << x << "  total: " << vec_decadas[x] << endl;
    }

    cout << "Elcolor mas votado es: " << max_color << " votos: " << maximo << endl;
    return 0;
}
