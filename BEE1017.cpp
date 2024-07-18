#include<iostream>
#include<clocale>
#include<cmath>
#include<iomanip>
using namespace std;
    int main () {
    setlocale (LC_ALL,"Portuguese");
    int tempo, velocidade;
    cin>>tempo>>velocidade;
    double distancia=velocidade*tempo;
    double litros=distancia/12;
    cout<<fixed<<setprecision(3)<<litros<<endl;
 
        
        
        return 0;
    }
