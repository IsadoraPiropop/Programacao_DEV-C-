#include<iostream>
#include<clocale>
using namespace std;
	int main () {//2. Fa�a um programa em C++ que leia a idade e peso de um paciente e escreve a
//dosagem que ele deve tomar de um medicamento, em gotas. Pessoas com 12 anos ou
//mais, e com peso igual ou superior a 60 kg devem tomar 40 gotas, mas com 12 anos
//ou mais, e peso abaixo de 60 kg deve tomar 30 gotas. Crian�as abaixo de 12 anos a
//dosagem � calculada pelo peso corp�reo, sendo a dosagem de 1 gota a cada 2 kg de
//peso. Por exemplo, uma crian�a com 10 kg deveria tomar 5 gotas, outra crian�a com
//11 kg, tamb�m tomaria 5 gotas, j� outra crian�a com 12 kg deveria tomar 6 gotas.
	setlocale (LC_ALL, "Portuguese");
	int id;
	float ps;
	cout<< "Informe a idade do paciente.";
	cin>>id;
	cout<<"informe o peso em Kg do paciente.";
	cin>>ps;
	if (id >= 12){
		if (ps >= 60) {
			cout <<"Deve tomar 40 gotas.";
		} else {
			cout <<"Deve tomar 30 gotas.";
		}
	} else {
		cout<<"Deve tomar   "<<(int)ps/2<< "    gotas.";
	}
		
		
		
		
		return 0;
	}
	
	
	
	//outra forma de fazer if (idade %2 == 1) {
	// idade = idade -1;
	
