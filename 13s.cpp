#include<iostream>
#include<cmath>
#include<clocale>
using namespace std;

int main () { //Crie um programa que declare uma vari�vel do tipo ponto flutuante e atribua
//a ela um valor. Em seguida, calcule e imprima a raiz c�bica desse valor.
	setlocale (LC_ALL,"Portuguese");
	double x=56.58;
	double r=(x, (double)1/3);
	cout<<"A raiz c�bica do n�mero informado � de:  " << r;
	return 0;
}
