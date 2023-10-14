#include <iostream>
#include <string>

using namespace std;

int main(){
    int numPaquete, numFigurita;
    char tipo;
    bool pegar;

    ///PUNTO A
    int contComunesRep = 0;
    bool comunes[50]{false};

    ///PUNTO B
    int contPegadas=0;

    ///PUNTO C
    int contHologramasSinRep=0;
    bool hologramas[50]={false};


    ///PUNTO D
    int contComunesPegada = 0;
    int contHologramasPegada = 0;
    string estadoAlbum="";

    ///PUNTO E
    int cantPaquetes = 0;
    int totalComunesNoPeg = 0;
    int totalHologramaNoPeg = 0;

    cout << "Numero de paquete: ";
    cin >> numPaquete;
    cout << "*********************"<<endl;

    while (numPaquete != 0){

        for (int i=0 ; i<5 ; i++ ){
            cout << "Numero de Figurita: ";
            cin >> numFigurita;
            cout << "Tipo: ";
            cin >> tipo;
            cout << "Pegar al album: ";
            cin >> pegar;
            cout<<endl;


            ///PUNTO A
            if(tipo == 'c'){
                if(!comunes[numFigurita-1]) {
                    comunes[numFigurita-1]=true;
                }else{
                    contComunesRep++;
                }
            }


            ///PUNTO B
            if(pegar){
                contPegadas++;
            }

            ///PUNTO C
            if(tipo == 'h' && !hologramas[numFigurita-1]){
                hologramas[numFigurita-1]=true;
                contHologramasSinRep++;
            }


            ///PUNTO D
            if(pegar){
                if(tipo == 'c'){
                    contComunesPegada++;
                }else{
                    contHologramasPegada++;
                }
            }else{
                if(tipo == 'c'){
                    totalComunesNoPeg++;
                }else{
                    totalHologramaNoPeg++;
                }
            }

        }

        cantPaquetes++;




        cout << "Ingrese el Numero de paquete: ";
        cin >> numPaquete;
    }
    ///DEFINICION PUNTO D
    if(contPegadas < 50){
        estadoAlbum = "Incompleto";
    }
    if((contComunesPegada+contHologramasPegada)==50 && contComunesPegada != 0 && contHologramasPegada != 0 ){
        estadoAlbum = "Completo";
    }
    if(contComunesPegada == 50  ){
        estadoAlbum = "Completo Comun";
    }
    if(contHologramasPegada == 50  ){
        estadoAlbum = "Completo Holografico";
    }

    ///COSTO DE LA COLLECCION
    int ventaDeNoPegadas = totalComunesNoPeg*20 + totalHologramaNoPeg*50;


    cout << "PUNTO A) La cantidad de figuritas comunes repetidas es: " << contComunesRep<<endl;
    cout << "PUNTO B) La cantidad de figuritas faltantes es: " << 50-contPegadas <<endl;
    cout << "PUNTO C) La cantidad de figuritas del tipo Holograma es: " << contHologramasSinRep <<endl;
    cout << "PUNTO D) El estado del Album es: " << estadoAlbum <<endl;
    cout << "PUNTO E) El costo de la colleccion es: " << cantPaquetes*500 <<endl;
    cout << "         Valor del venta de figuritas sobrantes: " << ventaDeNoPegadas <<endl;



    return 0;
}
