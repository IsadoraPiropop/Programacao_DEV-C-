#include<iostream>
#include<clocale>
using namespace std;
int main () {
	setlocale (LC_ALL, "Portuguese"); //
    int n,m,o; 
	cout<< "Informe o primeiro número.";
	cin>> n;
	cout<<"Informe o segundo número.";
	cin>> m;
	cout<<"Informe o terceiro número.";
	cin>> o;
	if (n<=m && m<=o) {
		cout<<"Os números estão em ordem crescente.";
} else {
	if (n>=m && m>=o) {
		cout<<"Os números estão em ordem decrescente.";
} else {
		cout<<"Os números estão fora de ordem.";	
}
}
		
		return 0;
	}
