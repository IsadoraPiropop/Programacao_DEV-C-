#include<iostream>
#include<clocale>
#include<cmath>
#include<iomanip>
#include<cstdlib>
using namespace std;
	int main () {
	setlocale (LC_ALL,"Portuguese");	//Crie um programa que declare um array de inteiros e
	// imprima seus elementos.
	int inteiros [8] = {1,2,5,6,8,9,10,15};
	
	cout<<"Elementos inteiros do array: "<<endl;
	for (int i=0; i<8; i++) {
		cout<<inteiros[i]<<" ";
	}	
	cout<<endl;	
		
		
		
		
		
		return 0;
	}
