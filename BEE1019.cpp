#include<iostream>
#include<clocale>
#include<cmath>
#include<iomanip>
using namespace std;
    int main () {
    setlocale (LC_ALL,"Portuguese");
    int Stempo;
    cin>>Stempo;
    int Htempo=0,Mtempo=0,SStempo=0;
    Htempo= Stempo/3600;
    Mtempo=(Stempo%3600)/60;
    SStempo =(Stempo%3600)%60;
    cout<<Htempo<<" horas"<<Mtempo<<" Minutos"<<SStempo<<" Segundos"<<endl;    
        
        
        
        return 0;
    }
