#include<iostream>
#include<clocale>
using namespace std;
int main () {
	setlocale (LC_ALL, "Portuguese"); //
    int n,m,o; 
	cout<< "Informe o primeiro n�mero.";
	cin>> n;
	cout<<"Informe o segundo n�mero.";
	cin>> m;
	cout<<"Informe o terceiro n�mero.";
	cin>> o;
	if (n<=m && m<=o) {
		cout<<"Os n�meros est�o em ordem crescente.";
} else {
	if (n>=m && m>=o) {
		cout<<"Os n�meros est�o em ordem decrescente.";
} else {
		cout<<"Os n�meros est�o fora de ordem.";	
}
}
		
		return 0;
	}
