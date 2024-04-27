#include<iostream>
#include<cmath>
#include<clocale>
using namespace std;

int main () { //Crie um programa que solicite ao usuário o raio e calcule e imprima o 
// perímetro e a área do círculo correspondente. Usar a biblioteca cmath.
	setlocale (LC_ALL,"Portuguese");
	double raio;
	float perimetro, area;
	cout<<"Insira o raio do círculo em metros.";
	cin>>raio;
	perimetro= 2 * M_PI * raio;
	area = M_PI * pow (raio, 2);
	cout<<"O perímetro do círculo informado é de:  " << perimetro<< " metros." <<endl;
	cout<<"A área do círculo informado é de:   "<< area << "  metros quadrados.";
	
	
	return 0;
}
