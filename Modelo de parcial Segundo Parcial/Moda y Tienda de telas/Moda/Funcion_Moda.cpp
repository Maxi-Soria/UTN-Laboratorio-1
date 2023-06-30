# include<iostream>

using namespace std;

///DECLARACION Y DEFINICION DE LAS FUNCIONES

int cantidadRepeticiones(int v[], const int tam, int num){
    int cont = 0;
    for (int i=0 ; i<tam ; i++ ){
        if(v[i] == num){
            cont++;
        }
    }
    return cont;
}

int Moda(int v[], const int tam){
    int masRepeticiones = 0;
    int numMasRepetido;
    int cantRep;
    for (int i=0 ; i<tam ; i++ ){
        cantRep = cantidadRepeticiones(v,tam,v[i]);
        if(cantRep > masRepeticiones){
            masRepeticiones = cantRep;
            numMasRepetido = v[i];
        }
    }
    return numMasRepetido;
}

int main(){

    const int tam = 10;
    int vec[tam] = {9,9,4,4,-5,-5,-5,-5,8,3} ;

    ///LLAMADO DE LA FUNCION
    cout<<Moda(vec,tam)<<endl;

	system("pause");
	return 0;
}










