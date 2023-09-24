#include <iostream>//Entrada e Saida
#include <climits>//Limpa a Entrada
#include <iomanip>//Formata Decimais
#include <string>//Manipulação de Strings

using namespace std;

int main() {

	// variaveis

	string nome1,
	nome2;
	int idade1,
	idade2;
	double salario1,
	salario2;

	//Primeira pessoa

	cout << "Primeira Pessoa:"<< endl;

	cout << "\nNome : ";//Saida
	getline(cin, nome1);//Entrada de String

	cout << "Idade ";//Saida
	cin >> idade1;//Entrada

	cout << "Salario : ";//Saida
	cin >> salario1;//Entrada

	//Segunda Pessoa

	cout << "\nSegunda Pessoa :" << endl;

	cout << "\nNome : ";
	cin.ignore(INT_MAX, '\n');//Limpa a quebra de linha
	getline (cin, nome2);//Entrada de String

	cout << "Idade : ";//Saida
	cin >> idade2;//Entrada 

	cout << "Salario : ";//Saida
	cin >> salario2;//Entrada

	//Saida

	cout << "\nNome = " << nome1<<endl;
	cout << "Idade = " <<idade1<< endl;
	cout << "Salario = " <<salario1<< endl;

	cout << "\nNome = " <<nome2<< endl;
	cout << "Idade = " << idade2 << endl;
	cout << "Salario = " <<salario2<< endl;

	return 0;
}