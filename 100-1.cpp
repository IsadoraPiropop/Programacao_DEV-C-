#include<iostream>
#include<clocale>
#include<cmath>
#include<iomanip>
using namespace std;
    int main () {
    setlocale (LC_ALL,"Portuguese");    
    for (int i=100; i>0 && i<101; i--) {
    	if (i%2==0) {
    		cout<<i<<endl;
		}
    }
        
        return 0;
    }
