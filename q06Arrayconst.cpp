#include<iostream>
#include<clocale>
#include<cmath>
#include<iomanip>
#include<cstdlib>
using namespace std;
	int main () {   //Crie um programa que calcule e mostre a soma de todos os elementos emum array.
	setlocale (LC_ALL,"Portuguese");	
	//posso fazer determinando os elementos	

	int Array []= {2,3,4,5,8,-9};	
	const int tam=6;
	int soma=0;
	
		for (int i=0; i<tam; i++) {
			soma = soma + Array [i];
		}
	
	cout<<"A soma do Array é  "<<soma<<endl;
		
	
	
		
		
		return 0;
	}
