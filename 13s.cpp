#include<iostream>
#include<cmath>
#include<clocale>
using namespace std;

int main () { //Crie um programa que declare uma variável do tipo ponto flutuante e atribua
//a ela um valor. Em seguida, calcule e imprima a raiz cúbica desse valor.
	setlocale (LC_ALL,"Portuguese");
	double x=56.58;
	double r=(x, (double)1/3);
	cout<<"A raiz cúbica do número informado é de:  " << r;
	return 0;
}
