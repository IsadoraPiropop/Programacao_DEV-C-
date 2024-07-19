#include <iostream>
#include <clocale>
#include <cmath>
#include <iomanip>
using namespace std;
    int main () {
    setlocale (LC_ALL,"Portuguese");    
    double salario;
    cin>>salario;
    if (salario>=0 && salario<=2000) {
        cout<<"Isento";
    } else if (salario>2000 && salario<=3000) {
        double valorA=(salario-2000)*0.08;
        double impostoA = valorA*salario;
        cout<<fixed<<setprecision(2)<<impostoA<<endl;
    } else if (salario>3000 && salario<=4500) {
        double resto=1000*0.08;
        double restoA= (salario-3000)*0.18;
        double impostoB=resto+restoA;
        cout<<fixed<<setprecision(2)<<impostoB<<endl;
    } else if (salario>4500) {
        double restoc= 1000*0.08;
        double restod= 1500*0.18;
        double restoo= (salario-4500)*0.28;
        double impostoAS=restoc+restod+restoo;
        cout<<fixed<<setprecision(2)<<impostoAS<<endl;
    }
        
        
        
        return 0;
    }
