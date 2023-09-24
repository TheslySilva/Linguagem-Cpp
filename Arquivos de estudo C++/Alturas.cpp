#include <iostream>
#include <string>
#include <climits>
#include <iomanip>

using namespace std;

int main() {

    int i,n,a;
    double soma,media,menor,porcentagem;

    cout << "Quantas pessoas voce vai digitar : ";
    cin >> n;

    string nomes[n];
    int idades[n];
    double alturas[n];
    soma=0;
    menor=0;
    
    cin.ignore(INT_MAX,'\n');
    
    for(i=0; i<n; i++) {
        
        cout << "\nDados da " <<i+1<<"° pessoa :"<< endl;
        cout << "Nome : ";
        getline (cin,nomes[i]);

        cout << "Idade ";
        cin >> idades[i];

        cout << "Altura : ";
        cin >> alturas[i];

        soma= soma+ alturas[i];

        if(idades[i]<16) {

            menor++;

        }
        cin.ignore(INT_MAX,'\n');

    }

    porcentagem = (menor *100)/n;

    media= (double) soma/n;

    cout <<fixed << setprecision(2);

    cout << "\nAltura media = " <<media<< endl;
    cout <<fixed << setprecision(1);
    cout << "\nPessoas com menos de 16 anos = "<<porcentagem<<"%" << endl;
    for(i=0; i<n; i++) {

        if(idades[i]<16) {
            cout << nomes[i] << endl;
        }
    }

    return 0;
}