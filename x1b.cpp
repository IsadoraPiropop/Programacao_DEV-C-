#include<iostream>
#include<clocale>
#include<cmath>
#include<iomanip>
#include<cstdlib>
using namespace std;
	int main () {
	setlocale (LC_ALL,"Portuguese"); // crie um programa que declare um array com n�meros e 
	// imprima sua m�dia artim�tica.
	
	int Array [] = {2,5,7,3,-2};
	int i; 
	float soma=0;
	
	for (i=0; i<5; i++) {
		soma = soma + Array [i];	
	}
	
	float media = soma/5;
	 
	 
	cout<<"A m�dia aritm�tica dos n�meros � de "<< media<< endl;
		return 0;
	}
