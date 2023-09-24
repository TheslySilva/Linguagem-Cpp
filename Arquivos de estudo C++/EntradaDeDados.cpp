#include <iostream>//Entrada e Saida
#include <climits>//Limpa Entradas
#include <iomanip>//Formata Decimais
#include <string>//Manipulação de Strings

using namespace std;

int main() {

	string nome1,
	nome2;
	int idade1,
	idade2;
	double salario1,
	salario2;

	//Primeira pessoa

	cout << "Primeira Pessoa:"<< endl;

	cout << "\nNome : ";
	getline(cin, nome1);

	cout << "Idade ";
	cin >> idade1;

	cout << "Salario : ";
	cin >> salario1;

	//Segunda Pessoa

	cout << "\nSegunda Pessoa :" << endl;

	cout << "\nNome : ";
	cin.ignore(INT_MAX, '\n');
	getline (cin, nome2);

	cout << "Idade : ";
	cin >> idade2;

	cout << "Salario : ";
	cin >> salario2;
	//Saida

	cout << "\nNome = " << nome1<<endl;
	cout << "Idade = " <<idade1<< endl;
	cout << "Salario = " <<salario1<< endl;
	
	cout << "\nNome = " <<nome2<< endl;
	cout << "Idade = " << idade2 << endl;
	cout << "Salario = " <<salario2<< endl;

	return 0;
}