#include<iostream>
#include<clocale>
using namespace std;

int main () { //Crie um programa que l� o nome de um aluno, as notas de suas tr�s provas e calcule e exiba
// na tela a m�dia harm�nica das provas.
	setlocale (LC_ALL, "Portuguese");
	string nome;
	float n1, n2, n3, mediaHarmonica;
	cout<<"Informe o nome do aluno.";
	cin>> nome;
	cout<<"Informe a primeira nota do aluno informado.";
	cin>> n1;
	cout<<"Informe a segunda nota do aluno informado.";
	cin>> n2;
	cout<<"Informe a terceira nota do alundo informado.";
	cin>> n3;
	mediaHarmonica = 3/((1/n1)+(1/n2)+(1/n3));
	cout<<"A m�dia harm�nica das notas de  " << nome << "  � de  "  << mediaHarmonica;

	
	
	
	
	
	
	
	
	
	return 0;
}
