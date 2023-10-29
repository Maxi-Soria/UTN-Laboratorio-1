#include <iostream>

using namespace std;

bool ObtenerTipoHorario(int horario){
    if(horario >= 6 && horario <= 18){
        return true;
    }
    return false;
}


void Punto2(bool vec[300]){
    for (int i=0 ; i<300 ; i++ ){
        if(vec[i]){
            cout << "Agente: " << i+1 << endl;
        }
    }


}

int main(){

    int numInfraccion, codAgente,dia,mes,hora, tipoInfraccion, distrito;
    float importe;

    ///PUNTO A
    int tipoDiurno[10]={};
    int tipoNocturno[10]={};
    string nombreInfraccion[10] = {"Exceso de velocidad", "Conducir bajo la influencia de alcohol o drogas", "Conducir mientras programa en C++",
    "Hablar o enviar mensajes de texto mientras se conduce", "No usar el cinturón de seguridad", "No respetar los semáforos", "Conducir sin licencia",
    "Estacionarse en lugares prohibidos", "Conducir conectado a Zoom", "Conducir sin luces encendidas"};

    ///PUNTO B
    bool agentesInfraccion[300]={};

    ///PUNTO C
    float recaudacionPorDistrito[111]={};


    ///PUNTO D
    int matrizPuntoD[12][10]={};
    string meses[12]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};


    cout << "Numero de infracción (entero): ";
    cin >> numInfraccion;

    while (numInfraccion != 0){
        cout << "Codigo de Agente (entero entre 1 y 300) ";
        cin >> codAgente;
        cout << "Dia (entero): ";
        cin >> dia;
        cout << "Mes (entero): ";
        cin >> mes;
        cout << "Hora (entero): ";
        cin >> hora;
        cout << "Tipo de infraccion (entero entre 10 y 19): ";
        cin >> tipoInfraccion;
        cout << "Distrito (entero entre 500 y 610): ";
        cin >> distrito;
        cout << "Importe de la infraccion (float): ";
        cin >> importe;

        //PUNTO A
        if(ObtenerTipoHorario(hora)){
            tipoDiurno[tipoInfraccion-10]++;
        }else{
            tipoNocturno[tipoInfraccion-10]++;
        }


        //PUNTO B
        agentesInfraccion[codAgente-1]=true;


        //PUNTO C
        if(mes <= 3){
            recaudacionPorDistrito[distrito-500]+=importe;
        }

        //PUNTO D
        matrizPuntoD[mes-1][tipoInfraccion-10]++;


        cout << "\nNumero de infraccion (entero): ";
        cin >> numInfraccion;

    }

    cout << "\nPUNTO A" << endl;
    cout << "Los nombres de tipos de infraccion del punto A son: " <<endl;
    for (int i=0 ; i<10 ; i++ ){
        if(tipoNocturno[i]> tipoDiurno[i]){
            cout <<"-"<< nombreInfraccion[i]<<endl;
        }
    }


    cout << "\nPUNTO B" << endl;
    Punto2(agentesInfraccion);


    cout << "\nPUNTO C" << endl;
    cout << "Los distritos que recaudaron menos de 1 millon son: " << endl;
    for (int i=0 ; i<111 ; i++ ){
        if(recaudacionPorDistrito[i] < 1000000){
            cout << "Distrito # " << i+500 << endl;
        }
    }


    cout << "\nPUNTO D" << endl;
    for (int i=0 ; i<12 ; i++ ){
        cout << meses[i]<<endl;
        for (int j=0 ; j<10 ; j++ ){
            if(matrizPuntoD[i][j] > 0){
                cout << "   -"<<nombreInfraccion[j] << " : " << matrizPuntoD[i][j]<<endl;
            }
        }
    }



    cout << "\n\n\n\t*********************************"<<endl;
    cout << "\t*      KLOSTER ES EL MEJOR      *"<<endl;
    cout << "\t*********************************"<<endl;

    return 0;

}


/*
--  CARGA --
5 10 3 2 19 12 515 400000
3 120 6 3 13 15 600 900000
6 120 9 6 22 19 600 200000
15 250 22 9 20 15 530 5000000
20 200 15 2 12 11 515 900000
4 160 9 3 10 15 502 1500000
0
*/

