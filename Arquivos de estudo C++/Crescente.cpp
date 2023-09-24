#include <iostream>

using namespace std;

int main(){
	
	int n1,n2,n3;
	
	cout << "Digite um numero : ";
	cin >> n1;
	cout << "Digite outro numero : ";
	cin >> n2;
	
	if(n1<n2){
		cout << "CRESCENTE!" << endl;
	}else{
		cout << "DECRESCENTE!" << endl;
	}
	
	return 0;
}