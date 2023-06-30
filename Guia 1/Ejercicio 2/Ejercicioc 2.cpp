#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    setlocale (LC_ALL, "Spanish");

    int A, B, aux;

	cout << "Ingrese el numero A: ";
	cin >> A;
	cout << "Ingrese el numero B: ";
	cin >> B;

	aux = A;
	A = B;
	B = aux;

	cout << "\nEl contenido de las variables cambiados es: A:" << A << " y B: " << B << endl;

    return 0;
}
