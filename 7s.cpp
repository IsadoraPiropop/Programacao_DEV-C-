#include<iostream>
#include<iomanip>
#include<clocale>
using namespace std;

int main () {  // Crie um programa que declare uma vari�vel do tipo ponto flutuante e atribua a ela um
// valor informado pelo usu�rio. Em seguida, arredonde esse valor para duas casas decimais e imprima o 
// resultado. 
	setlocale (LC_ALL,"Portuguese");
	float x;
	cout <<"Informe um valor para x.";
	cin>> x;
	cout<<fixed<<setprecision(2)<<x;
	
	
	
	return 0;
}
