#include<iostream>
#include<cmath>
#include<clocale>
using namespace std;

int main () { //Crie um programa que pe�a ao usu�rio para inserir um n�mero decimal e, em 
//seguida, calcule e imprima a parte fracion�ria desse n�mero.
	setlocale (LC_ALL,"Portuguese");
	double v;
	int r;
	cout<<"Informe um n�mero decimal.";
	cin>>v;
	r=v;
	cout<<"A parte fracionada do n�mero decimal informado � de  " << abs(v-r);

	return 0;	
}
