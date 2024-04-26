#include<iostream>
#include<clocale>
using namespace std;

int main () {         // Crie um programa que leia 3 valores e escreva na tela a média ponderada entre eles. 
// O primeiro valor tem peso 4, o segundo valor tem peso 7 e o terceiro valor tem peso 3.
	setlocale (LC_ALL, "Portuguese");
	float x, y,z, mediap;
	cout<<"Informe o primeiro número.";
	cin>> x;
	cout<<"Informe o segundo número.";
	cin>> y;
	cout<<"Informe o terceiro número.";
	cin>> z;
	mediap = (x*4 + y*7 + z*3)/(4+7+3);
	cout<<"A média ponderada dos números informados é de:  " << mediap;
	

	
	return 0;
}
