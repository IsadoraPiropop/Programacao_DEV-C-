#include<iostream>
#include<cmath>
#include<clocale>
using namespace std;

int main () {   // Crie um programa que solicite ao usuário dois números inteiros e, em seguida,
// imprima o resultado da potenciação do primeiro pelo segundo. Usar a biblioteca cmath.
	setlocale (LC_ALL,"Portuguese");
	int n1, n2,resultado;
	cout<<"Informe o primeiro número.";
	cin>> n1;
	cout<<"Informe o segundo número.";
	cin>>n2;
	resultado=pow(n1,n2);
	cout<<"A potência do primeiro número pelo segundo número informado é: " <<endl;
	cout<< resultado;
	
	return 0;
}
