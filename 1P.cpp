#include<iostream>
#include<clocale>
using namespace std;
	int main () { //quest�o 01 gabarito2023.1 2: Fa�a um programa em C++ que leia a velocidade de um ve�culo numa
	//estrada retil�nea e a velocidade de um novo
	// SoA + VA x T = SoB + VB x T
	// VA x T - VB x T = distancia sf
	// T X (VA - VB) = SoB - SoA
	// T = (SoB - SoA)/(VA - VB) 
		setlocale (LC_ALL, "Portuguese");
		double va, vb, sf, t;
		cout<<"Informe a velocidade do ve�culo A em metros por segundo.";
		cin>> va;
		cout<<"Informe a velocidade do ve�culo B em metros por segundo.";
		cin>> vb;
		cout<<"Informe a dist�ncia entre eles em metro.";
		cin>> sf;
		t = (sf)/(va-vb);
		cout<<"O tempo necess�rio para eles se encontrarem � de  " << t << "segundos";
		
		
		
		
		
		
		
		return 0;
	}
