#include<iostream>
#include<clocale>
using namespace std;
	int main () {// 5. Escreva um programa em C++ que solicite ao usu�rio uma sequ�ncia de 
	// n�meros e pare a solicita��o quando o npumero 0 for digitado. Em seguida, escreva na tela
	// a soma dos n�meros digitados.
	setlocale (LC_ALL, "Portuguese.");
	float soma, numero;
	soma = 0;
	for (int i =0; i !=0; i = i+1) {
	cout<<"Informe um n�mero.";
	cin>>numero;
	soma = soma + numero;
	cout<<"Informe um n�mero.";
	} 	
	cin >> soma;	
		
		return 0;
	}
	
	//mais indicado quando eu n�o sei o quanto vai ser executado � 
	//float numero, soma=0;
	//cin>> numero;
	// while (numero !=0) {
	//   soma= soma + numero;
	//   cout<<"Digite um n�mero.";
	//   cin >> numero;
	//}
	// cout<< "Soma:"<< soma;
