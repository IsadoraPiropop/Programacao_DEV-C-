#include<iostream>
#include<clocale>
using namespace std;
int main () {   //Crie um programa que leia dois valores n�mericos, e calcule e exibe na tela a m�dia aritm�tica deles.
	setlocale (LC_ALL, "Portuguese");
	int n, m;
	cout<<"Informe o primeiro n�mero.";
	cin>>n;
	cout<<"Informe o segundo n�mero.";
	cin>>m;
	cout<<"A m�dia dos n�meros informados �  " << (n+m)/2;
	setlocale (LC_ALL, "Portuguese");
	
	
	
	
	
	
	
	
	
	return 0;
}
	
