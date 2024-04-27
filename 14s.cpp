#include<iostream>
#include<cmath>
#include<clocale>
using namespace std;

int main () { //Crie um programa que peça ao usuário para inserir um número decimal e, em 
//seguida, calcule e imprima a parte fracionária desse número.
	setlocale (LC_ALL,"Portuguese");
	double v;
	int r;
	cout<<"Informe um número decimal.";
	cin>>v;
	r=v;
	cout<<"A parte fracionada do número decimal informado é de  " << abs(v-r);

	return 0;	
}
