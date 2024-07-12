//prova.questão01/ler nome e peso de uma pessoa em kg e informar a quantidade de água em litros
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
	
	cout<<"Deverá ingerir : " << agua << "litros de água"<<endl;
	cout<<"Deverá ingerir : " << carbo << "Kg de carboidratos"<<endl;	
	cout<<"Deverá ingerir : " << prot << "Kg de proteína"<<endl;
		
		
		return 0;
	}
