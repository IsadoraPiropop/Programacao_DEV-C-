#include<iostream>
#include<cmath>
#include<clocale>
using namespace std;

int main () { // Crie um programa que solicite ao usuário o raio da base e a altura de uma
//caixa d'água cilíndrica, calcule, e imprima na tela o seu volume em litros.
//Usar a biblioteca cmath.
	setlocale (LC_ALL,"Portuguese");
	double raio, altura, volume, areabase;
	cout<<"Informe o raio da base da caixa d'água em metros.";
	cin>> raio;
	cout<< "Informe a altura da mesma caixa d'água em metros.";
	cin>> altura;
	areabase= M_PI * pow (raio,2);
	volume = areabase*altura*1000;
	cout<<"O volume da caixa d'água cilíndrica é de  " << volume << "  litros.";
}
