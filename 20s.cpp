#include<iostream>
#include<cmath>
#include<clocale>
using namespace std;

int main () {  //Crie um programa que leia a altura, a base maior e a base menor referentes
// a um trap�zio, calcule e mostre na tela a sua �rea.
	setlocale (LC_ALL,"Portuguese");
	// �rea trap�zio = ((Base maior + base menor) * altura)/2
	float altura, basemaior, basemenor, area; 
	cout<<"Informe a altura do trap�zio em metros.";
	cin>> altura;
	cout<<"Informe a base maior do trap�zio em metros.";
	cin>> basemaior;
	cout<<"Informe a base menor do trap�zio em metros.";
	cin>> basemenor;
	area = ((basemaior + basemenor)*altura)/2;
	cout<<"A �rea do trap�zio informado � de  " << area << "  metros quadrados.";
	return 0;
}
