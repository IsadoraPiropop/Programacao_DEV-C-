#include<iostream>
#include<clocale>
using namespace std;

int main () {     //Crie um programa que solicite ao usuário um mês e um ano e imprima se o mês indicado tem 28,29 30 ou 31 dias.
	setlocale (LC_ALL, "Portuguese");
	int mes, ano;
	cout<<"Informe um mês.";
	cin>> mes;
	cout<<"Informe um ano.";
	cin>> ano;
	if (mes==1  ||
	mes==3  ||
	mes==5  ||
	mes==7  ||
	mes==8  ||
	mes==10 ||	
	mes==12) {
	cout<<"O mês indicado tem 31 dias.";
} else {
	if (mes==4  ||
	mes==6  ||
	mes==9  ||
	mes==11) {
	cout<<"O mês indicado tem 30 dias.";
} else {  //ano bissexto no mês 2 29 dias.
	if (ano%4==0 && ano%100 !=0
	|| ano%400 ==0)  {
	cout<<"O mês indicado tem 29 dias.";
} else{ // quando não bissexto 28 dias.
	cout<<"O mês indicado tem 28 dias.";
}
}
}
		return 0;
	}

	
