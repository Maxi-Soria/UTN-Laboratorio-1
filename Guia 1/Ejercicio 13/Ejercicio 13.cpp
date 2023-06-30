#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int imp_a_retirar, de_mil, de_quinietos, de_docientos, de_cien, resto;

	cout << "Ingrese el importe a retirar: $";
	cin >> imp_a_retirar;

	de_mil = imp_a_retirar / 1000;
	resto = imp_a_retirar %1000;
	de_quinietos = resto / 500;
	resto = resto % 500;
	de_docientos = resto / 200;
	resto = resto% 200;
	de_cien =  resto;

	cout << "se entregaran: " << endl;
	cout << "Billetes de $1000: " << de_mil << endl;
	cout << "Billetes de $500:  " << de_quinietos << endl;
	cout << "Billetes de $200:  " << de_docientos << endl;
	cout << "Billetes  de $100: " << de_cien << endl;

    return 0;
}
