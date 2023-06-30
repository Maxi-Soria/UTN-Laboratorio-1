#include <iostream>
#include <clocale>
#include <cstring>

using namespace std;

//DECLARACION


/// funcion que devuelve verdadero si n1 es multiplo de n2.
bool es_multiplo (int n1, int n2);

///funcion que recibe un float y devuelve un entero consderando el redondeo
int redondear(float n1);

///Funcion que devuelve verdadero si el numero ingresado es primo, de lo contrario devuelve falso
bool es_primo(int n1);

///funcion que recibe un vector y su tamaño y lo carga
void cargar_vector(int vec[], int tam);

///Funcion que lista los elementos de un vector
void mostrar_vector(int vec [], int tam );

///funcion que busca si un numero es un elemento del vector
bool buscar_en_el_vector(int vec[], int tam, int valorBuscado);


///funcion que devuelve la posicion de un numero en el vector
int posicion_en_el_vector(int vec [], int tam, int valorBuscado );

///funcion que recibe un vector y devuelve la cantidad de caracteres
int cantidad_de_caracteres(char vec[]);

///funcion que recibe un vector y un caracter y devuelve la cantidad de repeticiones del caracteres
int cantidad_de_Repeticiones_del_caracteres(char vec[], char caracter);

///funcion que recibe un  numero y devuelve el dia al que corresponde.
void nombre_del_dia(int num, char nombre[20]);

///Funcion que recibe dia, mes hemisferio y devuelve una cadena con la estacion del año
void es_la_estacion(int dia, int mes, int hemisferio, char estacion[10]);



int main (){

    setlocale (LC_ALL,"Spanish");

    int const A= 10;
    int const B = 5;
    float const C = 7.9;
    const int TAM = 5;
    int vec[TAM];
    int valor_buscado = 7;
    char palabra[20]={"PROGRAMACION"};
    char caracter = 'A';
    int dia, mes, hemisterio;
    char estacion[10];





    ///------------------------------------------------------------------
    cout << "EJERCICIO 1" << endl;
    if(es_multiplo(A,B)){
        cout << "VERDADERO" << endl;
    }else{
        cout << "Falso" << endl;
    }
    cout << endl;
    ///-------------------------------------------------------------------

    cout << "EJERCICIO 2" << endl;
    cout << "El numero " << C << " redondeado es: " << redondear(C)<<endl;
    cout << endl;

    ///-------------------------------------------------------------------

    cout << "EJERCICIO 3" << endl;
    cout << "EL numero " << A << " es primo: ";
    if(es_primo(A)){
        cout << "VERDADERO" << endl;
    }else{
        cout << "Falso" << endl;
    }
    cout << endl;
    ///--------------------------------------------------------------------

    cout << "EJERCICIO 4" << endl;
    cargar_vector(vec, TAM);
    cout << endl;

    ///---------------------------------------------------------------------

    cout << "EJERCICIO 5" << endl;
    mostrar_vector(vec, TAM);
    cout << endl << endl;

    ///---------------------------------------------------------------------

    cout << "EJERCICIO 6" << endl;
    cout << "El numero " << A << " esta en el vector: ";
    if(buscar_en_el_vector(vec, TAM, A)){
        cout << "VERDADERO" << endl;
    }else{
        cout << "Falso" << endl;
    }
    cout << endl;
    ///---------------------------------------------------------------------

    cout << "EJERCICIO 7" << endl;
    int pos = posicion_en_el_vector(vec, TAM, A);
    cout << "El numero " << A;
    if(pos == -1){
        cout << " no esta en el vector " << endl;
    }else{
        cout << " esta en la posicion: " << pos << endl;

    }
    cout << endl;

    ///------------------------------------------------------------------------
    cout << "EJERCICIO 8" << endl;
    cout << "La cantidad de caracteres es: "<<cantidad_de_caracteres(palabra) << endl;
    cout << endl;

    ///------------------------------------------------------------------------
    cout << "EJERCICIO 9" << endl;
    cout << "La cantidad de repeticiones del caracter '" <<caracter <<"' es: " <<cantidad_de_Repeticiones_del_caracteres(palabra,caracter)<< endl;

    cout << endl;

    ///---------------------------------------------------------------------------

    cout << "EJERCICIO 10" << endl;
    nombre_del_dia(2,palabra);
    cout << "El dia es: "<<palabra << endl;
    cout << endl;

    ///-------------------------------------------------------------------------------

    cout << "EJERCICIO 11" << endl;
    dia = 21, mes = 12, hemisterio = 0;
    es_la_estacion(20,12,1,estacion);
    cout << "Es la estacion "<< estacion << endl;


return 0;
}


/// funcion que devuelve verdadero si n1 es multiplo de n2.
bool es_multiplo (int n1, int n2){
    if (n1 % n2 == 0){
        return true;
    }
    else {
        return false;
    }
}

///funcion que recibe un float y devuelve un entero consderando el redondeo
int redondear(float n1){
    float resto;
    int entero;

    entero = n1/1;
    resto = n1-entero;

    if (resto <= 0.5){
        return entero;
    }
    else {
        return entero+1;
    }
}

///Funcion que devuelve verdadero si el numero ingresado es primo, de lo contrario devuelve falso
bool es_primo(int n1){
    bool band_primo = 0;

    for (int x = 2; x < n1; x++ ){
        if (n1 % x == 0){
            return false;
        }
    }
    return true;
}

///funcion que recibe un vector y su tamaño y lo carga
void cargar_vector(int vec[], int tam){
    cout << "Ingrese los elementos del vector: " << endl;
    for (int x = 0; x < tam; x++){
        cout << "# " << x+1 << ": ";
        cin >> vec[x];
    }
}

///Funcion que recibe un vector y su tamaño y lista sus elementos.
void mostrar_vector(int vec [], int tam ){
    cout << "Los elementos del vector son: " << endl;
    for (int x = 0; x < tam; x++){
        cout << vec[x] << " ";
    }

}
///funcion que busca si un numero es un elemento del vector
bool buscar_en_el_vector(int vec[], int tam, int valorBuscado){
    bool encontrado = 0;
    for (int x = 0; x < tam; x++){
        if (vec[x] == valorBuscado){
            return true;
        }
    }
    return false;
}


///funcion que devuelve la posicion de un numero en el vector
int posicion_en_el_vector(int vec [], int tam, int valorBuscado ){
    for (int x = 0; x < tam; x++){
        if (vec[x] == valorBuscado){
            return x+1;
        }
    }
    return -1;
}


///funcion que recibe un vector y devuelve la cantidad de caracteres
int cantidad_de_caracteres(char vec[]){

    int i = 0;
    while (vec[i] != '\0'){
        i++;
    }
    return i;

}

///funcion que recibe un vector y un caracter y devuelve la cantidad de repeticiones del caracteres
int cantidad_de_Repeticiones_del_caracteres(char vec[], char caracter){

    int i = 0, repeticiones =0;
    while (vec[i] != '\0'){
        if(vec[i] == caracter){
            repeticiones++;
        }
        i++;
    }
    return repeticiones;

}


///funcion que recibe un  numero y devuelve el dia al que corresponde.
void nombre_del_dia(int num, char nombre[20]){

    switch (num){
    case 0:
        strcpy(nombre,"DOMINGO");
        break;
    case 1:
        strcpy(nombre,"LUNES");
        break;
    case 2:
        strcpy(nombre,"MARTES");
        break;
    case 3:
        strcpy(nombre,"MIERCOLES");
        break;
    case 4:
        strcpy(nombre,"JUEVES");
        break;
    case 5:
        strcpy(nombre,"VIERNES");
        break;
    case 6:
        strcpy(nombre,"SABADO");
        break;
    }

}

///Funcion que recibe dia, mes hemisferio y devuelve una cadena con la estacion del año
void es_la_estacion(int d, int m, int hem, char estacion[10]){

    if(((m==3 && d>=21 || m==4 || m==5 || m==6 && d<21) && hem==1) || ((m == 9 && d >= 21 || m == 10 || m == 11 || m == 12 && d <21) && hem == 0) ){
        strcpy(estacion,"PRIMAVERA");
    }

    if(((m==6 && d>=21 || m==7 || m==8 || m==9 && d<21) && hem==1) || ((m == 12 && d >= 21 || m == 1 || m == 2 || m == 3 && d <21) && hem == 0) ){
        strcpy(estacion,"VERANO");
    }

    if(((m==9 && d>=21 || m==10 || m==11 || m==12 && d<21) && hem==1) || ((m == 3 && d >= 21 || m == 4 || m == 5 || m == 6 && d <21) && hem == 0) ){
        strcpy(estacion,"OTOÑO");
    }

    if(((m==12 && d>=21 || m==1 || m==2 || m==3 && d<21) && hem==1) || ((m == 6 && d >= 21 || m == 7 || m == 8 || m == 9 && d <21) && hem == 0) ){
        strcpy(estacion,"INVIERNO");
    }


}
