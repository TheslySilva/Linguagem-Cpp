#include <iostream>

using namespace std;

int main(){
	
	int i,n1,n2,n3,soma;
	
cout << "Digite um numero : ";
cin >> n1;
cout << "Digite um numero : ";
cin >> n2;

if(n1>n2){
	
n3=n1;
n1=n2;
n2=n3;

}
soma=0;
for(i=n1+1;i<=n2-1;i++)

if(i%2!=0){
	soma= soma + i;
}
cout << "\nA SOMA DOS IMPARES É = "<< soma<< endl;
	return 0;
}