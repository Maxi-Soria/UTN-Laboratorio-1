#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int venta,descuento,a_pagar;

	cout<<"Ingrese el importe de la venta: $";
	cin>>venta;
	cout<<"Ingrese el porcentaje de descuento: %";
	cin>>descuento;
	a_pagar = venta - (descuento * venta / 100);
    cout<<endl<<"El monto a abonar es: $"<<a_pagar<<endl<<endl;

    return 0;
}
