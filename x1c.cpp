#include<iostream>
#include<clocale>
#include<cmath>
#include<cstdlib>
using namespace std;
	int main () {
	setlocale (LC_ALL,"Portuguese");  // crie um programa que declare um array com n�meros  
	// dados pelo usu�rio e imprima sua m�dia artim�tica.
		
	int tam;	
		cout<<"Qual a quantidade de n�meros deseja informar? ";
		cin>> tam;
	int Array [tam];		
	
	for (int i=0; i<tam; i++) {
		cout<<"Insira o n�mero inteiro referente a posi��o "<<i+1<<" : "<<endl;
		cin>> Array [i];
	}
	float soma=0;
	float media;
	for (int i=0; i<tam; i++) {
		soma = soma + Array [i];
	}
	media = soma/ tam;
	
	cout<<"A m�dia dos n�meros inteiros informados � de "<<media<<endl; 	
		return 0;
	} 
