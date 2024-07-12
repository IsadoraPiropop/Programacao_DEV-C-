#include<iostream>
#include<clocale>
using namespace std;
	int main () {//2. Faça um programa em C++ que leia a idade e peso de um paciente e escreve a
//dosagem que ele deve tomar de um medicamento, em gotas. Pessoas com 12 anos ou
//mais, e com peso igual ou superior a 60 kg devem tomar 40 gotas, mas com 12 anos
//ou mais, e peso abaixo de 60 kg deve tomar 30 gotas. Crianças abaixo de 12 anos a
//dosagem é calculada pelo peso corpóreo, sendo a dosagem de 1 gota a cada 2 kg de
//peso. Por exemplo, uma criança com 10 kg deveria tomar 5 gotas, outra criança com
//11 kg, também tomaria 5 gotas, já outra criança com 12 kg deveria tomar 6 gotas.
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
	
