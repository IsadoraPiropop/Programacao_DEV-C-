#include<iostream>
#include<cmath>
#include<clocale>
using namespace std;

int main () {  //Crie um programa que solicite ao usu�rio o valor do raio de uma esfera e 
// calcule e imprima o volume dessa esfera.
	setlocale (LC_ALL,"Portuguese");
	double raio, volume;
	cout<<"Informe o raio da esfera em que se deseja obter o volume.";
	cin>> raio;
	volume= M_PI * pow (raio,2);
	cout<<"O volume da esfera informada � de  " << volume << "  metros c�bicos.";
	
	
	return 0;
}
