#include <iostream>
#include <clocale>
using namespace std;

int main () {
	setlocale (LC_ALL, "Portuguese");   //Ler tr�s n�meros informados pelo usu�rio e imprimir a m�dia deles. Ademais, imprimir qual deles foi o maior n�mero informado.
	float n, m, o;
	cout << "Informe um primeiro n�mero.";
	cin>> n;
	cout << "Informe um segundo n�mero.";
	cin>> m;
	cout << "Informe um terceiro n�mero.";
	cin>> o;
	cout << "A m�dia dos n�meros informados � de:" << ((n+m+o)/3);
		if (n>m && n>o) {
		cout <<"   O mair n�mero informado foi:" << n;
	} else {
		if (m>n && m>o) {
		cout <<"   O maior n�mero informado foi:" << m;
	} else {
		if (o>n && o>m) {
		cout << "  O maior n�mero informado foi:" << o;
	} else {
		cout << "  Os n�meros informados s�o iguais.";}
	}
	}

		return 0;
}
		
	
		

