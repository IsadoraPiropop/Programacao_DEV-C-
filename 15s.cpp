#include<iostream>
#include<cmath>
#include<clocale>
using namespace std;

int main () { //Crie um programa que solicite ao usu�rio o raio e calcule e imprima o 
// per�metro e a �rea do c�rculo correspondente. Usar a biblioteca cmath.
	setlocale (LC_ALL,"Portuguese");
	double raio;
	float perimetro, area;
	cout<<"Insira o raio do c�rculo em metros.";
	cin>>raio;
	perimetro= 2 * M_PI * raio;
	area = M_PI * pow (raio, 2);
	cout<<"O per�metro do c�rculo informado � de:  " << perimetro<< " metros." <<endl;
	cout<<"A �rea do c�rculo informado � de:   "<< area << "  metros quadrados.";
	
	
	return 0;
}
