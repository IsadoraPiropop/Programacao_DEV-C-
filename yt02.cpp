#include<iostream>
#include<clocale>
using namespace std;
int main () {
	setlocale (LC_ALL, "Portuguese"); //Crie um programa para ler o ano atual e seu ano de nascimento e escrever sua idade.
	int  a, b;		
	cout<<"Informe o ano atual.";
	cin>>a;
	cout << "Informe o ano do seu nascimento.";
	cin>>b;
	cout <<"Sua idade corresponde a " << a-b << "anos.";
		
		
		
		return 0;
}
