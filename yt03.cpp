#include <iostream>
#include <clocale>
using namespace std;

int main () {
	setlocale (LC_ALL, "Portuguese");   //Efetuar a soma de dois n�meros informados pelo usu�rio e imprimir o resultado.
	float n, m;
	cout << "Informe um primeiro n�mero.";
	cin>> n;
	cout << "Informe um segundo n�mero.";
	cin>> m;
	cout << "A soma dos n�meros informados � de:" <<n+m;
		
		
		
		
		return 0;
	}
