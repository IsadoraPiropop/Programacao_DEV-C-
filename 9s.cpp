#include<iostream>
#include<cmath>
#include<clocale>
using namespace std;

int main () { //Crie um programa que pe�a ao usu�rio para inserir dois n�meros inteiros e,
// em seguida, imprima o resultado arredondado da divis�o do primeiro pelo segundo.
//Usar a biblioteca cmath.
	setlocale (LC_ALL,"Portuguese");
	int n1, n2;
	float resultado;
	cout<<"Informe o primeiro n�mero.";
	cin>> n1;
	cout<<"Informe o segundo n�mero.";
	cin>> n2;
	resultado = round ((float)n1/(float)n2); 
	cout<<"A divis�o arredondada �:";
	cout<<resultado<<endl;
	return 0;
}
