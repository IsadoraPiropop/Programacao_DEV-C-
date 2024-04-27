#include<iostream>
#include<cmath>
#include<clocale>
using namespace std;

int main () { //Crie um programa que dados os valores de a, b e c referentes a equação de
// segundo grau, ax^2 + bx + c = 0, forneça as raízes dessa equação. Considere que os valores
//de a, b, c sempre geraram um delta positivo. Usar a biblioteca cmath.
	setlocale (LC_ALL,"Portuguese");
	double a, b, c, r1, r2;
	cout<<"Informe um valor para a variável a na equação de segundo grau.";
	cin>> a;
	cout<<"Informe um valor para a variável b na equação de segundo grau.";
	cin>> b;
	cout<<"Informe um valor para a variável c na equação de segundo grau.";
	cin>> c;
	// baskára x= (-b +- raiz (b-4ac)) /2a
	//poderíamos usar:
	//	delta=b-4*a*c;
//	r1= (-b + sqrt(delta))/(2*a);
//	r2= (-b - sqrt(delta))/(2*a);
	r1 = (- b + pow (b-4*a*c, 1/2))/(2*a);
	r2 = (- b - pow (b-4*a*c, 1/2))/(2*a);
	cout<<"A primeira raiz sendo de "<< r1 << endl;
	cout<<"A segunda raiz sendo de "<< r2;
	
	return 0;
}
