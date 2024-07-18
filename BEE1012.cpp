#include<iostream>
#include<clocale>
#include<cmath>
#include<iomanip>
using namespace std;
    int main () {
    setlocale (LC_ALL,"Portuguese");    
    double A, B, C;    
    cin>>A>>B>>C;    
    double areat=A*C/2;
    double areac=3.14159*C*C;
    double areatp=(A+B)*C/2;
    double areaq=B*B;
    double arear=A*B;
    cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<areat<<endl;
    cout<<fixed<<setprecision(3)<<"CIRCULO: "<<areac<<endl;
    cout<<fixed<<setprecision(3)<<"TRAPEZIO: "<<areatp<<endl;
    cout<<fixed<<setprecision(3)<<"QUADRADO: "<<areaq<<endl;    
    cout<<fixed<<setprecision(3)<<"RETANGULO: "<<arear<<endl;    
    
        
        
        return 0;
    }
