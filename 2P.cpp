//prova.quest�o01/ler nome e peso de uma pessoa em kg e informar a quantidade de �gua em litros
#include<iostream>
#include<clocale>
using namespace std;
	int main () {
	setlocale (LC_ALL, "Portuguese")	
	float n, p;
	cout<<"Informe o seu nome.";
	cin>> n;
	cout<<"Informe o seu peso em Kg.";
	cin>> p;
	agua=(50/1000)*p;
	carbo=(6/1000)*p;
	prot=(2,5/1000)*p;	
	
	cout<<"Dever� ingerir : " << agua << "litros de �gua"<<endl;
	cout<<"Dever� ingerir : " << carbo << "Kg de carboidratos"<<endl;	
	cout<<"Dever� ingerir : " << prot << "Kg de prote�na"<<endl;
		
		
		return 0;
	}
