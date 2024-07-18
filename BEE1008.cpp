#include<iostream>
#include<clocale>
#include<cmath>
#include<iomanip>
using namespace std;
    int main () {
    setlocale (LC_ALL,"Portuguese");
    int nfuncionario, nhoras;
    double vlhoras;
    cin>>nfuncionario>>nhoras>>vlhoras;
    double salario;    
    salario=nhoras*vlhoras;    
    cout<<"NUMBER = "<<nfuncionario<<endl;
    cout<<"SALARY = U$ "<<salario<<endl;
 
        
        return 0;
    }
