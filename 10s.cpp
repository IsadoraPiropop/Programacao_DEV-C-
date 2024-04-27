#include<iostream>
#include<cmath>
#include<clocale>
using namespace std;

int main () {    //Crie um programa que solicite ao usuário um número decimal e, em seguida
//calceule e imprima o valor absoluto desse número. Usar a biblioteca cmath.
	setlocale (LC_ALL,"Portuguese");
	float decimal, resultado;
	cout<<"Informe um número decimal.";
	cin>> decimal;
	resultado=abs(decimal);
	cout<<"O módulo do número informado é:  " <<endl;
	cout<<resultado;
	
	
	return 0;
}
