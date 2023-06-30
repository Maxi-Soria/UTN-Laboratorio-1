#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int alf_A, alf_B, alf_C;
	float total;

    cout << "Ingrese el total de ventas de el alfajor A: ";
    cin >> alf_A;
    cout << "Ingrese el total de ventas de el alfajor B: ";
    cin >> alf_B;
    cout << "Ingrese el total de ventas de el alfajor C: ";
    cin >> alf_C;

    total = alf_A+ alf_B + alf_C;

    cout << "El porcentaje de ventas de alfajor A es: " << alf_A *100 / total << "%" << endl;
    cout << "El porcentaje de ventas de alfajor B es: " << alf_B *100 / total << "%" << endl;
    cout << "El porcentaje de ventas de alfajor C es: " << alf_C *100 / total << "%" << endl;

    return 0;
}
