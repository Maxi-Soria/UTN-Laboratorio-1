#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    float imp_sin_desc, imp_con_desc, porc_desc;
    cout << "Importe de la venta sin el descuento: ";
	cin >> imp_sin_desc;
	cout << "Importe de la venta con el descuento: ";
	cin >> imp_con_desc;

	porc_desc = 100 - (imp_con_desc * 100 /imp_sin_desc);

	cout << "El descuento aplicado fue de: " << porc_desc << "%"<< endl;

    return 0;
}
