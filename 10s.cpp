#include<iostream>
#include<cmath>
#include<clocale>
using namespace std;

int main () {    //Crie um programa que solicite ao usu�rio um n�mero decimal e, em seguida
//calceule e imprima o valor absoluto desse n�mero. Usar a biblioteca cmath.
	setlocale (LC_ALL,"Portuguese");
	float decimal, resultado;
	cout<<"Informe um n�mero decimal.";
	cin>> decimal;
	resultado=abs(decimal);
	cout<<"O m�dulo do n�mero informado �:  " <<endl;
	cout<<resultado;
	
	
	return 0;
}
