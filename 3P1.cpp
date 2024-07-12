#include<iostream>
#include<clocale>
using namespace std;
	int main () { //3. Faça um programa em C++ que leia dois números (inicial e final) e escreva o valor
//total da soma de todos os números pares do intervalo digitado pelo usuário, incluindo
//os números informados. Ex: Se o usuário informar 10 e 20 a resposta seria 90
//(10+12+14+16+18+20). Se o usuário informar 10 e 15 a resposta seria 36
//(10+12+14). Se o usuário informar 11 e 15 a resposta seria 26 (12+14).
	setlocale (LC_ALL, "Portuguese");	
	int inferior, superior, soma;
	soma =0;
	cout<<"Informe o número inicial.";
	cin>> inferior;
	cout<<"Informe o número final.";
	cin>> superior;
	//soma de todos os números pares
	//se começa em ímpar, começa do próximo	
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
