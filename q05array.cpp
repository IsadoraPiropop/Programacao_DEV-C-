#include<iostream>
#include<clocale>
#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
	int main () {
		setlocale (LC_ALL,"Portuguese"); //Crie um algoritmo/fluxograma/programa que encontre o segundo maior elemento em um array.
		int elementos;
		int Array[elementos];
		cout<<"Informe a quantidade de elementos que irá inserir.";
		cin>>elementos;
		
		//verificando se tenho o segundo maior.
		
		if (elementos <= 1) {
			cout<<"Total de elementos insuficiente para informar o segundo maior valor";
			return 0;
		}
		
		//armazenar dados em um array
		
		for (int i=0; i<elementos; i++) {
			cout<<"Digite o elemento  "<<(i+1)<<" : ";
			cin>> Array[i];
		}
		
		//analisar qual é o segundo maior 
		
		int primeiromaior = Array[0];
		int segundomaior = Array [0];
	
		
		for (int i=0; i<elementos; i++) {
			if (Array[i]>primeiromaior) {
				segundomaior = primeiromaior;  //atualiza o segundo maior 
				primeiromaior=Array[i];        //atualiza o primeiro maior
			} else  if (Array[i]>segundomaior && Array[i]!=primeiromaior) {
				segundomaior =Array[i];  //Atualiza o segundo maior
			}
		}

		cout<<"O segundo maior valor informado foi de  "<<segundomaior<<endl;
		
		return 0;
	}
