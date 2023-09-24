#include <iostream>//Entrada e Saida de dados
#include <iomanip>//Formata numeros decimais

using namespace std;//Biblioteca padrao

int main() {

    //Variaveis
    string nome;
    int idade;
    char sexo;
    double altura,
           salario;

    //Atribuindo valores
    nome = "Thesly Silva";
    idade = 21;
    sexo = 'M';
    altura = 1.61;
    salario = 394.632;

    //Saida de dados
    cout << fixed << setprecision(2);
    cout << "Nome = " << nome << endl;
    cout << "Idade = " << idade << endl;
    cout << "Sexo = " << sexo << endl;
    cout << "Altura = " << altura << endl;
    cout << "Salario = " << salario << endl;
    cout << "\nA pessoa " << nome << " sexo " << sexo << "tem "<< idade << altura << "e ganha " << salario << endl;
    return 0;
}