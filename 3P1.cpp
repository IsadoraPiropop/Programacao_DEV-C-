#include<iostream>
#include<clocale>
using namespace std;
	int main () { //3. Fa�a um programa em C++ que leia dois n�meros (inicial e final) e escreva o valor
//total da soma de todos os n�meros pares do intervalo digitado pelo usu�rio, incluindo
//os n�meros informados. Ex: Se o usu�rio informar 10 e 20 a resposta seria 90
//(10+12+14+16+18+20). Se o usu�rio informar 10 e 15 a resposta seria 36
//(10+12+14). Se o usu�rio informar 11 e 15 a resposta seria 26 (12+14).
	setlocale (LC_ALL, "Portuguese");	
	int inferior, superior, soma;
	soma =0;
	cout<<"Informe o n�mero inicial.";
	cin>> inferior;
	cout<<"Informe o n�mero final.";
	cin>> superior;
	//soma de todos os n�meros pares
	//se come�a em �mpar, come�a do pr�ximo	
	soma=0;
	if (inferior % 2 == 1) {
		inferior++; // inferior = inferior +1;
	}
	for (int i= inferior; i<= superior; i = i+2) {
		soma = soma + i;
	}
	cout<<soma;
		return 0;
	}
