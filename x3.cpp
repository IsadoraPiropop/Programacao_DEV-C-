#include<iostream>
#include<clocale>
#include<cmath>
#include<iomanip>
#include<cstdlib>
using namespace std;
	int main () {
	setlocale (LC_ALL,"Portuguese"); //Desenvolva um programa que receba do usu�rio o n�mero de
// elementos desejados (m�ximo de 20) armazena estes dados em um array. Depois mostre na tela qual
// foi o maior e o menor elemento desse array usando loops.		
		
		int elementos;
		elementos <= 20;
		cout<<"Informe a quantidade de elementos que ir� digitar ";		
		cin>>elementos;
		int Array [elementos];
		
		for (int i=0; i<elementos; i++) {
			cout<<"Insira o elemento da posi��o "<<i+1<<" : ";
			cin>> Array [i];
		}
		
		int maior= Array [0];
		int menor= Array [0];
		
		for (int i=0; i<elementos; i++) {
			if (Array[i] >= maior) {
				maior = Array [i];
			} else if (Array [i] <= menor) {
				menor = Array [i];
			}
	}
		cout<<"O maior n�mero informado foi: "<<maior<<endl;
		cout<<"O menor n�mero informado foi: "<<menor<<endl;
		
		return 0;
	}
