#include<iostream>
#include<clocale>
using namespace std;
	int main () { // Crie um programa que solicite ao usuário 2 valores, em seguida, troque o valor dessas 
// variáveis e imprima os novos valores.
	setlocale (LC_ALL,"Portuguese");
	int x,y;
	cout<<"Informe um primeiro valor.";
	cin>>x;
	cout<<"Informe um segundo valor.";
	cin>>y;
	cout<<"O primeiro número agora é:  " << y << "e o segundo número agora é: "  << x;
		
		
		
		
		
	return 0;
	}
