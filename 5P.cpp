#include<iostream>
#include<clocale>
using namespace std;
	int main () {// 5. Escreva um programa em C++ que solicite ao usuário uma sequência de 
	// números e pare a solicitação quando o npumero 0 for digitado. Em seguida, escreva na tela
	// a soma dos números digitados.
	setlocale (LC_ALL, "Portuguese.");
	float soma, numero;
	soma = 0;
	for (int i =0; i !=0; i = i+1) {
	cout<<"Informe um número.";
	cin>>numero;
	soma = soma + numero;
	cout<<"Informe um número.";
	} 	
	cin >> soma;	
		
		return 0;
	}
	
	//mais indicado quando eu não sei o quanto vai ser executado é 
	//float numero, soma=0;
	//cin>> numero;
	// while (numero !=0) {
	//   soma= soma + numero;
	//   cout<<"Digite um número.";
	//   cin >> numero;
	//}
	// cout<< "Soma:"<< soma;
