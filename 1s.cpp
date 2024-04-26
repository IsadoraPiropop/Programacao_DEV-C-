#include<iostream>
#include<clocale>
using namespace std;
int main () {   //Crie um programa que leia dois valores númericos, e calcule e exibe na tela a média aritmética deles.
	setlocale (LC_ALL, "Portuguese");
	int n, m;
	cout<<"Informe o primeiro número.";
	cin>>n;
	cout<<"Informe o segundo número.";
	cin>>m;
	cout<<"A média dos números informados é  " << (n+m)/2;
	setlocale (LC_ALL, "Portuguese");
	
	
	
	
	
	
	
	
	
	return 0;
}
	
