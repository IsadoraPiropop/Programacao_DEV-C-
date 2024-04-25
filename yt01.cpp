#include<iostream>
#include<clocale>
using namespace std;
int main () {
	setlocale (LC_ALL,"Portuguese");   //Crie um programa para ler e escrever a primeira letra do seu nome
	char letra;
	cout << "Digite a primeira letra do seu nome.";
	cin>> letra;
	cout << "A primeira letra do nome:" << letra;
	return 0;
}

