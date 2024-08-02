#include<iostream>
#include<clocale>
#include<cmath>
#include<cstdlib>
using namespace std;
	int main () {
	setlocale (LC_ALL,"Portuguese");  // crie um programa que declare um array com números  
	// dados pelo usuário e imprima sua média artimética.
		
	int tam;	
		cout<<"Qual a quantidade de números deseja informar? ";
		cin>> tam;
	int Array [tam];		
	
	for (int i=0; i<tam; i++) {
		cout<<"Insira o número inteiro referente a posição "<<i+1<<" : "<<endl;
		cin>> Array [i];
	}
	float soma=0;
	float media;
	for (int i=0; i<tam; i++) {
		soma = soma + Array [i];
	}
	media = soma/ tam;
	
	cout<<"A média dos números inteiros informados é de "<<media<<endl; 	
		return 0;
	} 
