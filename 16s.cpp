#include<iostream>
#include<cmath>
#include<clocale>
using namespace std;

int main () { // Crie um programa que solicite ao usu�rio o raio da base e a altura de uma
//caixa d'�gua cil�ndrica, calcule, e imprima na tela o seu volume em litros.
//Usar a biblioteca cmath.
	setlocale (LC_ALL,"Portuguese");
	double raio, altura, volume, areabase;
	cout<<"Informe o raio da base da caixa d'�gua em metros.";
	cin>> raio;
	cout<< "Informe a altura da mesma caixa d'�gua em metros.";
	cin>> altura;
	areabase= M_PI * pow (raio,2);
	volume = areabase*altura*1000;
	cout<<"O volume da caixa d'�gua cil�ndrica � de  " << volume << "  litros.";
}
