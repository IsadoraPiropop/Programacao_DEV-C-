#include<iostream>
#include<clocale>
#include<cmath>
#include<iomanip>
#include<cstdlib>
using namespace std;
	int main () { //Crie um programa que preencha um array com os quadrados dos números de 1 a N,
	// onde N é um valor informado pelo usuário.
	setlocale (LC_ALL,"Portuguese");	

	int N;	
	cout<<"Informe um valor ";	
	cin>> N;	
	int numeros [N];
		//o quadrado deles
	for (int i=0; i<N; i++) {
		numeros [i] = pow (i+1,2);
	}
		//impressão
	for (int i=0; i <N; i++) {
		cout<<numeros [i] <<" "; 
	}	
			
	return EXIT_SUCCESS;
	}
