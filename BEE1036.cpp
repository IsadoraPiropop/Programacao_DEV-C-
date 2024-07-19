#include<iostream>
#include<clocale>
#include<cmath>
#include<iomanip>
using namespace std;
    int main () {
    setlocale (LC_ALL,"Portuguese");    
    double A, B, C;
    cin>>A;
    cin>>B;
    cin>>C;
    double R1, R2, CD;
    R1 = (- B+ (sqrt(B*B-4*A*C)))/(2*A); 
    R2 = (- B -(sqrt(B*B-4*A*C)))/(2*A);   
	CD =(B*B-4*A*C);     
    if (A==0 || CD==0) {
      cout<<"Impossível calcular";  
    }  else {
      cout<<fixed<<setprecision(5)<<"R1 = "<<R1<<endl;
      cout<<fixed<<setprecision(5)<<"R2 = "<<R2<<endl;
    }
        
     
        return 0;
    }
