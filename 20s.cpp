#include<iostream>
#include<cmath>
#include<clocale>
using namespace std;

int main () {  //Crie um programa que leia a altura, a base maior e a base menor referentes
// a um trapézio, calcule e mostre na tela a sua área.
	setlocale (LC_ALL,"Portuguese");
	// área trapézio = ((Base maior + base menor) * altura)/2
	float altura, basemaior, basemenor, area; 
	cout<<"Informe a altura do trapézio em metros.";
	cin>> altura;
	cout<<"Informe a base maior do trapézio em metros.";
	cin>> basemaior;
	cout<<"Informe a base menor do trapézio em metros.";
	cin>> basemenor;
	area = ((basemaior + basemenor)*altura)/2;
	cout<<"A área do trapézio informado é de  " << area << "  metros quadrados.";
	return 0;
}
