#include<iostream>
#include<clocale>
#include<cmath>
#include<iomanip>
#include<cstdlib>
using namespace std;
	int main () {
	setlocale (LC_ALL,"Portuguese");	//Desenvolva um programa que receba do usu�rio o n�mero de 
	//elementos desejados (m�ximo de 20), armazena esses dados em um array. Depois mostre na tela
	//qual foi o maior e o menor elemento desse array usando loops.
	//ENTRADA: RECEBER O N�MERO DOS ELEMENTOS DESEJADOS (M�XIMO DE 20)
	

	int Nelementos;
	int Array[20];
	cout<<"Informe o n�mero de elementos que deseja informar.";
	cin>>Nelementos;
	
	//PROCESSAMENTO: - ARMAZENA ESTES DADOS EM UM ARRAY;
	//				 - ENCONTRAR MAIOR E MENOR ELEMENTO DESSE ARRAY;
	
	for (int i=0; i<Nelementos; i++) {
		cout<<"Digite o elemento "<< (i+1) << " : ";
		cin>>Array[i];
	}
	int max, min;
	min = Array [0];
	max = Array [0];
	
	for (int i=0; i<Nelementos; i++) {
		if (Array[i]>max) {
			max = Array [i];		
		} else if (Array[i] < min) {
			min = Array[i];
		}
		
	}
	//SA�DA: MOSTRE NA TELA O MAIOR E O MENOR ELEMENTO DESSE ARRAY;
	
		cout<<"O menor valor digitado foi: "<<min<<endl;
		cout<<"O maior valor digitado foi: "<<max<<endl;
		
		return EXIT_SUCCESS;
	}
