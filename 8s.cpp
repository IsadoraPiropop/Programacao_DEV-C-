#include<iostream>
#include<cmath>
#include<clocale>
using namespace std;

int main () { //Crie um programa que leia um �ngulo em graus, calcule e imprima o seno e cosseno dele. Usar a biblioteca cmath.
	setlocale (LC_ALL,"Portuguese");
	float angulo, seno, cosseno;
	cout<<"Informe um �ngulo em graus.";
	cin>>angulo;
	seno= sin(angulo * M_PI/180);
	cosseno= cos(angulo * M_PI/180);
	cout<<"O seno de  " << angulo << "�";
	cout<<   seno <<endl;
	cout<<"O cosseno de " << angulo << "�";
	cout<<   cosseno<<endl;
	
	
	
	
	return 0;
}
