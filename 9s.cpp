#include<iostream>
#include<cmath>
#include<clocale>
using namespace std;

int main () { //Crie um programa que peça ao usuário para inserir dois números inteiros e,
// em seguida, imprima o resultado arredondado da divisão do primeiro pelo segundo.
//Usar a biblioteca cmath.
	setlocale (LC_ALL,"Portuguese");
	int n1, n2;
	float resultado;
	cout<<"Informe o primeiro número.";
	cin>> n1;
	cout<<"Informe o segundo número.";
	cin>> n2;
	resultado = round ((float)n1/(float)n2); 
	cout<<"A divisão arredondada é:";
	cout<<resultado<<endl;
	return 0;
}
