#include <iostream>

using namespace std;

int main() {

    int n1,
        n2,
        n3,
        n4;

    cout << "Digite o primeiro numero : " ;
    cin >> n1;
    cout << "Digite o segundo numero : " ;
    cin >> n2;
    cout << "Digite o terceiro numero : " ;
    cin >> n3;

    if(n1 < n2 && n1 < n3) {
        n4 = n1;
    } else if(n2 < n1 && n2 < n3) {
        n4 = n2;
    } else if(n3 < n1 && n3 < n2) {
        n4 = n3;
    } else {
        n4 = n1;
    }
    cout << "\nMENOR = " << n4<< endl;
    return 0;
}