#include<iostream>
#include<clocale>
#include<cmath>
#include<iomanip>
#include<cstdlib>
using namespace std;
	int main () {
	setlocale (LC_ALL,"Portuguese"); // crie um programa que declare um array com n�meros e 
	// imprima sua m�dia artim�tica.
	
	int tam=5;	
	float Array [tam];	
		Array[0]=2;
		Array[1]=3;
		Array[2]=5;
		Array[3]=7;
		Array[4]=-2;
		
	float media = (Array [0]+ Array [1]+ Array [2]+	Array [3]+ Array [4])/tam;
	cout<<"A m�dia aritm�tica dos n�meros � de "<< media<< endl;
		return 0;
	}
