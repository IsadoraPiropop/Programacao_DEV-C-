#include<iostream>
#include<clocale>
#include<cmath>
#include<iomanip>
using namespace std;
    int main () {
    setlocale (LC_ALL,"Portuguese");    
    const int velocidadeX=60;
    const int velocidadeY=90;    
    int distancia;
    cin>>distancia;
    int diferencavelocidade = velocidadeY-velocidadeX;
    int tempohr, tempomin;
    tempohr=distancia/diferencavelocidade; 
    tempomin = tempohr*60;
	cout<<tempomin<<" minutos"<<endl; 
        
        
        return 0;
    }
