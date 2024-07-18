#include<iostream>
#include<clocale>
#include<cmath>
#include<iomanip>
using namespace std;
    int main () {
    setlocale (LC_ALL,"Portuguese");
    int codigo1, numero1, codigo2, numero2;
    double valorunit1, valorunit2;    
    cin>>codigo1>>numero1>>valorunit1;
    cin>>codigo2>>numero2>>valorunit2;
    double valorpagar;
    valorpagar=numero1*valorunit1+numero2*valorunit2;
    cout<<"VALOR A PAGAR: R$ "<<valorpagar<<endl;    
        
        
        
        return 0;
    }
