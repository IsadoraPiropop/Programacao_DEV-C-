#include<iostream>
#include<clocale>
using namespace std;

int main () {    // Crie um programa que leia 2 valores e escreva na tela a m�dia ponderada entre eles. O primeiro valor tem peso 40%, e o segundo valor tem peso 60%.
	setlocale (LC_ALL, "Portuguese");
	float n,m, media;
	cout<<"Informe o primeiro n�mero.";
	cin>> n;
	cout<<"Informe o segundo n�mero.";
	cin>> m;
	media = (n*0.4 + m*0.6)/1; 
	cout<<"A m�dia ponderada dos n�meros informados � de:  " << media;
	
	
	

	return 0;
}
