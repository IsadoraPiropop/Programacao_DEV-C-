#include<iostream>
#include<clocale>
using namespace std;

int main () {    // Crie um programa que leia 2 valores e escreva na tela a média ponderada entre eles. O primeiro valor tem peso 40%, e o segundo valor tem peso 60%.
	setlocale (LC_ALL, "Portuguese");
	float n,m, media;
	cout<<"Informe o primeiro número.";
	cin>> n;
	cout<<"Informe o segundo número.";
	cin>> m;
	media = (n*0.4 + m*0.6)/1; 
	cout<<"A média ponderada dos números informados é de:  " << media;
	
	
	

	return 0;
}
