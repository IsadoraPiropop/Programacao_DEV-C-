#include<iostream>
#include<cmath>
#include<clocale>
using namespace std;

int main () { // Crie um programa que leia os catetos de um triângulo retângulo, calcule
// e escreva a hipotenusa correspondente. Usar a biblioteca cmath.
	setlocale (LC_ALL, "Portuguese");
	int cao,caa,x;
	double hip;
	cout<<"Informe o cateto oposto do triângulo.";
	cin>> cao;
	cout<<"Informe o cateto adjacente do triângulo.";
	cin>> caa;
	// hip2 = cato2 + cata2
	x = pow (cao,2)+pow (caa, 2);
	hip= sqrt (x);
	cout<<"A hipotenusa do triângulo retângulo informado é:  " << hip;
	
	return 0;
}
