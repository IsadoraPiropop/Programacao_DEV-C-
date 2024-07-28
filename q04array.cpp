#include<iostream>
#include<clocale>
#include<cmath>
#include<iomanip>
#include<cstdlib>
using namespace std;
	int main () {
	setlocale (LC_ALL,"Portuguese");	
	int tam;
	cout<<"Qual será a quantidade de números que deseja informar?";	
	cin>> tam;	
	int dado [tam];	
	for (int i=0; i<tam; i++) {
		dado [i] = (tam-1)-i;
		
	//imprimir	
	for (int i=0; i<tam; i++) {
		cout<<dado[i]<< " ";
	}	
	}
	
		return EXIT_SUCCESS;
	}
