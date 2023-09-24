#include <iostream>
#include <climits>
#include <iomanip>
#include <string>

using namespace std;

int main() {

    double idade1,idade2,media;
    string nome1,nome2;

    cout << "Dados da primeira pessoa :" << endl;
    cout << "Nome : ";
    getline(cin,nome1);
    cout << "Idade ";
    cin >> idade1;

    cout << "\nDados da segunda pessoa" << endl;
    cout << "Nome : " ;
    cin.ignore(INT_MAX, '\n');
    getline(cin,nome2);
    cout << "Idade : ";
    cin >> idade2;

    media= (idade1+idade2)/2;
    cout << fixed << setprecision (1);
    cout << "A idade media entre " << nome1<<" e "<< nome2<<" é de "<< media<<" anos"<<endl;

    return 0;
}