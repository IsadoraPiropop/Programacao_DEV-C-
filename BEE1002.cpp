#include<iostream>
#include<clocale>
#include<cmath>
#include<iomanip>
using namespace std;
    int main () {
    setlocale (LC_ALL,"Portuguese");    
    double raio;
    const double pi=3.14159;
    cin>> raio;
    double area=pi*raio*raio;
   
 
    cout<<fixed<<setprecision(4)<< "A="<<area<<endl;
        
        
        
        
        
        return 0;
    }
