#include<iostream>
#include<clocale>
using namespace std;

int main () {         // Crie um programa que leia 3 valores e escreva na tela a m�dia ponderada entre eles. 
// O primeiro valor tem peso 4, o segundo valor tem peso 7 e o terceiro valor tem peso 3.
	setlocale (LC_ALL, "Portuguese");
	float x, y,z, mediap;
	cout<<"Informe o primeiro n�mero.";
	cin>> x;
	cout<<"Informe o segundo n�mero.";
	cin>> y;
	cout<<"Informe o terceiro n�mero.";
	cin>> z;
	mediap = (x*4 + y*7 + z*3)/(4+7+3);
	cout<<"A m�dia ponderada dos n�meros informados � de:  " << mediap;
	

	
	return 0;
}
