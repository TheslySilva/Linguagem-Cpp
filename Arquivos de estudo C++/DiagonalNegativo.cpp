#include <iostream>

using namespace std;

int main() {

    int x,y,n,v;

    cout << "Digite a ordem da matriz : ";
    cin >>n;

    int matriz[n][n];

    for(x=0; x<n; x++) {
        for(y=0; y<n; y++) {
        
            cout << "Elemento [" << x <<" , "<< y<< "] = ";
            cin >> matriz[x][y];
        }
        cout << "\n" << endl;
    }
    v=0;
    
    cout << "\nDIAGONAL PRINCIPAL" << endl;
    
    for(x=0; x<n; x++) {
    
        cout << matriz[x][x]<< endl;
        
        for(y=0; y<n; y++) {
        
            if(matriz[x][y]<0) {
            
                v++;
            }
        }
    }
    cout << "\nQUANTIDADE DE NUMEROS NEGATIVOS = " <<v<< endl;
    return 0;
}