#include<iostream>
#include<cmath>
#include<clocale>
using namespace std;

int main () {   // Crie um programa que solicite ao usu�rio dois n�meros inteiros e, em seguida,
// imprima o resultado da potencia��o do primeiro pelo segundo. Usar a biblioteca cmath.
	setlocale (LC_ALL,"Portuguese");
	int n1, n2,resultado;
	cout<<"Informe o primeiro n�mero.";
	cin>> n1;
	cout<<"Informe o segundo n�mero.";
	cin>>n2;
	resultado=pow(n1,n2);
	cout<<"A pot�ncia do primeiro n�mero pelo segundo n�mero informado �: " <<endl;
	cout<< resultado;
	
	return 0;
}
