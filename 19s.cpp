#include<iostream>
#include<cmath>
#include<clocale>
using namespace std;

int main () { // Crie um programa que leia os catetos de um tri�ngulo ret�ngulo, calcule
// e escreva a hipotenusa correspondente. Usar a biblioteca cmath.
	setlocale (LC_ALL, "Portuguese");
	int cao,caa,x;
	double hip;
	cout<<"Informe o cateto oposto do tri�ngulo.";
	cin>> cao;
	cout<<"Informe o cateto adjacente do tri�ngulo.";
	cin>> caa;
	// hip2 = cato2 + cata2
	x = pow (cao,2)+pow (caa, 2);
	hip= sqrt (x);
	cout<<"A hipotenusa do tri�ngulo ret�ngulo informado �:  " << hip;
	
	return 0;
}
