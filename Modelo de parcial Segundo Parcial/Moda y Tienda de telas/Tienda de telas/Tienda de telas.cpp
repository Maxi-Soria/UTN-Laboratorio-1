# include<iostream>
# include<string>

using namespace std;

int main(){
    int nro_sucursal, dia, color;
    float metros, importe;
    //Punto A
    float vmetros[10]={};
    string vColores[10]={"Celeste", "Blanco", "Rojo","Amarillo","Negro","Azul Francia", "Gris", "Naranja", "Rosa", "Aguamarina"};

    //Punto B
    float vsucursalrojo[10]={};
    //Punto C
    bool vblanco[10]={false}, vceleste[10]={false};
    bool vazulfrancia[10]={false};

    cout<<"Ingrese la sucursal (1 a 10)"<<endl;
    cin>>nro_sucursal;

        while(nro_sucursal!=0){
            cout<<"Ingrese el dia (1 a 30)"<<endl;
            cin>>dia;
            cout<<"Ingrese el color (11 a 20)"<<endl;
            cin>>color;
            cout<<"Ingrese los metros"<<endl;
            cin>>metros;
            cout<<"Ingrese el importe"<<endl;
            cin>>importe;


            //Punto A
            vmetros[color-11]+=metros;

            //Punto B
            if(color==13){
                vsucursalrojo[nro_sucursal-1]+=importe;
            }

            //Punto C
            if(color==11){
                vceleste[nro_sucursal-1]=true;
                 }
            if(color==12){
                vblanco[nro_sucursal-1]=true;
                 }
            if(color==16){
                vazulfrancia[nro_sucursal-1]= true;
            }




            cout<<"Ingrese la sucursal (1 a 10)"<<endl;
            cin>>nro_sucursal;
        }


        //Punto A

        cout<<"Los colores que vendieron mas de 1000 metros de tela son: "<<endl;
        for (int i=0 ; i<10 ; i++ ){
            if(vmetros[i] > 1000){
                cout << vColores[i] << "  ";
            }
        }
        cout << endl;


        //Punto B
        int maximo=0;
        int sucursal;
        for(int i=0; i<10; i++){
            if(vsucursalrojo[i]>maximo){
                maximo=vsucursalrojo[i];
                sucursal=i+1;
            }

        }
        cout<<"El numero de sucursal con mas recaudacion por ventas de telas de color rojo es "<<sucursal<<endl;

        //Punto C
        int contador=0;
        for(int i=0; i<10; i++){
            if(vblanco[i]==true  &&  vceleste[i]==true   &&  vazulfrancia[i]==0){
                contador++;
            }
        }
        cout<<"La cantidad de sucursales del punto C son:   "<<contador<<endl;

	return 0;
}


