#include <iostream>
#include <clocale>
using namespace std;

int main () {
	setlocale (LC_ALL, "Portuguese");   //Ler três números informados pelo usuário e imprimir a média deles. Ademais, imprimir qual deles foi o maior número informado.
	float n, m, o;
	cout << "Informe um primeiro número.";
	cin>> n;
	cout << "Informe um segundo número.";
	cin>> m;
	cout << "Informe um terceiro número.";
	cin>> o;
	cout << "A média dos números informados é de:" << ((n+m+o)/3);
		if (n>m && n>o) {
		cout <<"   O mair número informado foi:" << n;
	} else {
		if (m>n && m>o) {
		cout <<"   O maior número informado foi:" << m;
	} else {
		if (o>n && o>m) {
		cout << "  O maior número informado foi:" << o;
	} else {
		cout << "  Os números informados são iguais.";}
	}
	}

		return 0;
}
		
	
		

