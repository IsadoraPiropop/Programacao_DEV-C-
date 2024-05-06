#include<iostream>
#include<cmath>
#include<clocale>
using namespace std;

int main () { //Crie um programa que declare uma variável do tipo string e a inicialize com
// o nome de uma pessoa em minúsculo. Em seguinda imprima quantos caracteres ela tem. 
	setlocale (LC_ALL,"Portuguese");
	string nome= "isadora";
	cout<<"No nome " << nome << "  há  " << nome.size() << "  caracteres.";
	return 0;
}
