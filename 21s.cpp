#include<iostream>
#include<cmath>
#include<clocale>
using namespace std;

int main () { //Crie um programa que solicite ao usuário o nome, o peso e a altura de 
//uma pessoa, e escreva na tela o seu IMC (ìndice de Massa Corpórea).
	setlocale (LC_ALL,"Portuguese");
	// IMC = PESO/ ALTURA^2
	// ACRESCENTEI AS FAIXASA DE IMC. IMC < 18.50 baixo peso / IMC 18.5 - 24.9 normal / IMC 25-29.9 sobrepeso
	// IMC 30-34.9 obesidade I / IMC 35-39.9 obesidade II / IMC 40-49.9 obesidade III/
	// IMC > 50 obesidade IV
	string nome;
	double peso, altura, IMC;
	cout<<"Informe o nome.";
	cin>> nome;
	cout<<"Informe o peso do indivíduo.";
	cin>> peso;
	cout<<"Informe agora a altura.";
	cin>> altura;
	IMC= peso/(pow(altura,2));
	cout<<"O IMC de  " << nome << "  é de   " << IMC << endl;
	if (IMC < 18.50){
	cout<<nome <<"  está abaixo do peso.";
} else {
	if (IMC >= 18.5 && IMC <= 24.9) {
	cout<<nome <<"  está com peso ideal.";
} else { 
	if ( IMC >= 25 && IMC <= 29.9)  {
	cout<<nome <<"  está com sobrepeso.";
} else { 
	if ( IMC >= 30 && IMC <= 34.9)  {
	cout<<nome <<"  está obeso. Obesidade grau I";
} else { 
	if ( IMC >= 35 && IMC <= 39.9)  {
	cout<<nome <<"  está obeso. Obesidade grau II";
} else { 
	if ( IMC >= 40 && IMC <= 49.9)  {
	cout<<nome <<"  está obeso.Obesidade grau III";
} else{ // acima de 50, obesidade IV.
	cout<<nome <<"  está obeso.Obesidade grau IV";
}
}
}
}
}
}
		return 0;
	}

