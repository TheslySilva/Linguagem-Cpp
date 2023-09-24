#include <iostream>
#include <cmath>//Biblioteca Math
#include <iomanip>

using namespace std;

int main() {

	double base,
	altura,
	area,
	perimetro,
	diagonal;

	cout << "Base do retangulo : ";
	cin >> base;
	cout << "Altura do retangulo : ";
	cin >> altura;

	cout << fixed << setprecision(4);

	area = base * altura;
	perimetro = 2*(base+altura);
	diagonal = sqrt(pow(base, 2) + pow(altura, 2));

	cout << "\nAREA = " << area<<endl;
	cout << "PERIMETRO = "<<perimetro << endl;
	cout << "DIAGONAL = " <<diagonal<< endl;
	
	return 0;
}