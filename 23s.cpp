#include<iostream>
#include<cmath>
#include<clocale>
#include<string>
#include<cctype> //para tolower e toupper
using namespace std;
	int main () { //Crie um programa que declare uma vari�vel do tipo string e a inicialize
// com o nome de uma pessoa. Converta esse texto para mai�sculo e min�sculo e imprima o resultado.
// usar a biblioteca string.
		setlocale (LC_ALL, "Portuguese");
		string nome = "isadora";
		
		for	(int i=0; i <nome.size(); i++)
			nome [i] =tolower (nome[i]);
			cout<<"Min�sculo:  "<<nome;	
		
		for (int i=0; i <nome.size(); i++)
			nome[i]= toupper(nome[i]);
			cout<<"  Ma�usculo:  " <<nome<<endl;
		

		
		
		return 0;
	}
