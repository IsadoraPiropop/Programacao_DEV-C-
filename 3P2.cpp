#include<iostream>
#include<clocale>
using namespace std;
	int main () {//3. Faça um programa em C++ que leia 20 números e escreva a média aritmética dos
//valores lidos, a quantidade de valores positivos lidos, a quantidade de valores
//negativos lidos e o percentual de valores negativos e positivos lidos.
	setlocale (LC_ALL, "Portuguese");	
	float soma, numero, positivos, negativos;
	soma = 0;
	positivos = 0;
	negativos =0;
	for (int i =0; i <20; i = i+1) {
		cout<< "Informe o " << i+1 << " º número: ";
		cin>>numero;
		soma = soma + numero;
		
		if (numero >0) {
			positivos = positivos + 1;
		}
		if (numero <0 ) {
			negativos = negativos + 1;
		}
	}
		
		cout<<"Média: "<< soma/20<<endl;
		cout<<"Positivos: "<< positivos<<endl;
		cout<<"negativos: "<< negativos <<endl;	
		cout<<"Percentual positivos: "<< (positivos/20)*100<<endl;
		cout<<"Percentual negativos: "<< (negativos/20)*100<<endl;	
		
		
		
		
		
		
		
		
		
		
		
		return 0;
	}
