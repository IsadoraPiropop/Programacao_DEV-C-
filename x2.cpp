#include <iostream>
#include <clocale>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;
	int main () {
	setlocale (LC_ALL,"Portuguese"); // Fa�a um programa que carregue um array com elementos
// num�ricos inteiros, calcule e mostre os n�meros primos e suas respectivas posi��es.		
		
	int tam;	
	cout<<"Quantos n�meros deseja informar? "<<endl;	
	cin>> tam;	
	int Array [tam];
	
		int primos=0;
		int conta=0;
		
	//ler o array	
	for (int i=0; i<tam; i++) {
		cout<<"Informe o elemento da posi��o "<<i+1<<endl;
		cin>> Array [i];
	
	// n�meros primos - divisiv�is por 1 e por ele mesmo
		for (int j=1; j<=Array[i]; j++) {
			if (Array[i] % j ==0) {
					conta = conta ++;
	}	 if(conta==2) {
			primos = primos ++;

		
	}
	}	
	
		cout<<"Este n�mero � primo e sua posi��o �: "<<i+1<<endl;			
	}
	return 0;	
	}
