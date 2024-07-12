#include<iostream>
#include<clocale>
using namespace std;
	int main () { //questão 01 gabarito2023.1 2: Faça um programa em C++ que leia a velocidade de um veículo numa
	//estrada retilínea e a velocidade de um novo
	// SoA + VA x T = SoB + VB x T
	// VA x T - VB x T = distancia sf
	// T X (VA - VB) = SoB - SoA
	// T = (SoB - SoA)/(VA - VB) 
		setlocale (LC_ALL, "Portuguese");
		double va, vb, sf, t;
		cout<<"Informe a velocidade do veículo A em metros por segundo.";
		cin>> va;
		cout<<"Informe a velocidade do veículo B em metros por segundo.";
		cin>> vb;
		cout<<"Informe a distância entre eles em metro.";
		cin>> sf;
		t = (sf)/(va-vb);
		cout<<"O tempo necessário para eles se encontrarem é de  " << t << "segundos";
		
		
		
		
		
		
		
		return 0;
	}
