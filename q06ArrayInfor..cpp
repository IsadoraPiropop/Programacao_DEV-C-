#include<iostream>
#include<clocale>
#include<cmath>
#include<iomanip>
#include<cstdlib>
using namespace std;
	int main () {   //Crie um programa que calcule e mostre a soma de todos os elementos emum array.
	setlocale (LC_ALL,"Portuguese");	
	//posso fazer pedindo ao usuário os elementos do array
	int Nelementos;
	cout<<"Qual quantidade de elementos deseja informar?";
	cin>>Nelementos;
	int Array [Nelementos];
	

	for (int i=0; i<Nelementos; i++) {
		cout<<"Informe o elemento "<<(i+1)<<" : "<<endl;
		cin>> Array [i];
	}


	int soma=0;

	for (int i=0; i<Nelementos; i++) {
		soma= soma + Array [i];
	}

		cout<<"A soma dos elementos informados é de "<<soma<<endl;
	
		
		return 0;
	}
