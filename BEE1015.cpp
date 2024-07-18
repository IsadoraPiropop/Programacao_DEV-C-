#include<iostream>
#include<clocale>
#include<cmath>
#include<iomanip>
using namespace std;
    int main () {
    setlocale (LC_ALL,"Portuguese");    
    double x1, y1, x2, y2;
    cin>>x1>>y1;
    cin>>x2>>y2;
    double distancia= sqrt (pow(x2-x1,2)+pow(y2-y1,2));
    cout<<fixed<<setprecision(4)<<distancia<<endl;    
        
        
        
        return 0;
    }
