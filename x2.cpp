#include <iostream>
#include <clocale>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;
	int main () {
	setlocale (LC_ALL,"Portuguese"); // Faça um programa que carregue um array com elementos
// numéricos inteiros, calcule e mostre os números primos e suas respectivas posições.		
		
	int tam;	
	cout<<"Quantos números deseja informar? "<<endl;	
	cin>> tam;	
	int Array [tam];
	
		int primos=0;
		int conta=0;
		
	//ler o array	
	for (int i=0; i<tam; i++) {
		cout<<"Informe o elemento da posição "<<i+1<<endl;
		cin>> Array [i];
	
	// números primos - divisivéis por 1 e por ele mesmo
		for (int j=1; j<=Array[i]; j++) {
			if (Array[i] % j ==0) {
					conta = conta ++;
	}	 if(conta==2) {
			primos = primos ++;

		
	}
	}	
	
		cout<<"Este número é primo e sua posição é: "<<i+1<<endl;			
	}
	return 0;	
	}
