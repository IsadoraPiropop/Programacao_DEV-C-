#include<iostream>
#include<clocale>
#include<cmath>
#include<iomanip>
using namespace std;
    int main () {
    setlocale (LC_ALL,"Portuguese");
    int A, B, C, D;
    cin>>A>>B>>C>>D;
    float DIFERENCA;
	DIFERENCA= A*B - C*D;
    cout<<"DIFEREN�A = "<< DIFERENCA;
        
        
        
        
    return 0;
    }
