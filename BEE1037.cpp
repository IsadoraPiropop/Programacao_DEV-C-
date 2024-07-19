#include<iostream>
#include<clocale>
#include<cmath>
#include<iomanip>
using namespace std;
    int main () {
    setlocale (LC_ALL,"Portuguese");        
    double valor;
    cin>>valor;
    if (valor>=0 && valor<=250000) {
        cout<<"Intervalo [0,25]";
    } else if (valor>250000 && valor<=50000) {
        cout<<"Intervalo (25,50]";
    } else if (valor>50000 && valor<=750000) {
        cout<<"Intervalo (50,75]";
    } else if (valor>750000 && valor<=1000000) {
        cout<<"Intervalo (75,100]";
    } else {
        cout<<"Fora de intervalo";
    }
        

        
        
        return 0;
    }
