#include <iostream>
#include<clocale>
using namespace std;
int main (){
	setlocale(LC_ALL,"Portuguese");  //crie um algoritmo que imprima os números de 1 a 10.
	for (int x = 1; x<=10; x++) {
		cout<<x<<" ";
	}
	return 0;
}
