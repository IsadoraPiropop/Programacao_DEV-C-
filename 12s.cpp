#include<iostream>
#include<cmath>
#include<clocale>
using namespace std;

int main () {   //Crie um programa que declare uma variável do tipo ponto fluante e atribua
//a ela um valor.Em seguida, calcule e imprima a raiz quadrada desse valor. Use a biblioteca
//cmath.
	setlocale (LC_ALL,"Portuguese");
	float v;
	double r;
	cout<<"Informe um valor.";
	cin>>v;
	//  podemos colocar r=pow(v,0,5); ou até 
	// r = pow (v, 1/2);
	r=sqrt(v);
	cout<<"A raiz quadrada do número informado é " << r;
	return 0;
}
