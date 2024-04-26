#include<iostream>
#include<clocale>
using namespace std;
	int main () { //Crie um programa que peça ao usuário para inserir dois números inteiros e,
// em seguida, imprima o resultado da divisão do primeiro pelo segundo, considerando somente a parte inteira.
	setlocale (LC_ALL, "Portuguese");
	int n, m, divisao;
	cout<<"Informe o primeiro número.";
	cin>> n;
	cout<<"Informe o segundo número.";
	cin>> m;
	divisao=n/m;
	cout<<"O resultado da divisão é: " << divisao;
		
		
		
	return 0;
	}
