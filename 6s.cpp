#include<iostream>
#include<clocale>
using namespace std;
	int main () { //Crie um programa que pe�a ao usu�rio para inserir dois n�meros inteiros e,
// em seguida, imprima o resultado da divis�o do primeiro pelo segundo, considerando somente a parte inteira.
	setlocale (LC_ALL, "Portuguese");
	int n, m, divisao;
	cout<<"Informe o primeiro n�mero.";
	cin>> n;
	cout<<"Informe o segundo n�mero.";
	cin>> m;
	divisao=n/m;
	cout<<"O resultado da divis�o �: " << divisao;
		
		
		
	return 0;
	}
