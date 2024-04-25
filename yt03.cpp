#include <iostream>
#include <clocale>
using namespace std;

int main () {
	setlocale (LC_ALL, "Portuguese");   //Efetuar a soma de dois números informados pelo usuário e imprimir o resultado.
	float n, m;
	cout << "Informe um primeiro número.";
	cin>> n;
	cout << "Informe um segundo número.";
	cin>> m;
	cout << "A soma dos números informados é de:" <<n+m;
		
		
		
		
		return 0;
	}
