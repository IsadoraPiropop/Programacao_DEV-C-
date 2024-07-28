#include<iostream>
#include<clocale>
#include<cmath>
#include<iomanip>
#include<cstdlib>
using namespace std; 
	int main () { //crie um programa que preencha um array com os números em ordem inversa.
	setlocale (LC_ALL,"Portuguese");
	
	const int tam=5;	
	int numeros[tam];	
	for (int i=0; i<tam; i++) {
		numeros[i] = (tam-1)-i;
	}
	//imprimir
	for (int i=0; i<tam; i++) {
		cout<<numeros[i]<<" ";
	}	
		
		
		
		
		
	return EXIT_SUCCESS;	
	}
