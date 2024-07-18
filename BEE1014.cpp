#include<iostream>
#include<clocale>
#include<cmath>
#include<iomanip>
using namespace std;
    int main () {
    setlocale (LC_ALL,"Portuguese");    
    int distancia;
    float gasto;
    cin>>distancia>>gasto;
    double consumomedio;
    consumomedio=distancia/gasto;
    cout<<fixed<<setprecision(3)<<consumomedio<<" km/l"<<endl;
        
        
        
        
        
        
        return 0;
    }
 
