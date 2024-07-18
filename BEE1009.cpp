#include<iostream>
#include<clocale>
#include<cmath>
#include<iomanip>
using namespace std;
    int main () {
    setlocale (LC_ALL,"Portuguese");    
    string nome;
    cin>>nome;
    double salariofixo;    
    cin>>salariofixo;
    double vendas,total;
    cin>>vendas;
    total=salariofixo+(0.15*vendas);
    cout<<"TOTAL = "<<total<<endl;    
        
        
        return 0;
    }
