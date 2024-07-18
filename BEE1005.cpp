#include<iostream>
#include<clocale>
#include<cmath>
#include<iomanip>
using namespace std;
    int main () {
    setlocale (LC_ALL,"Portuguese");
    double A,B;
    cin>>A>>B;
    double MEDIA;
	MEDIA=(A*3.50+B*7.50)/11;
    cout<<fixed<<setprecision(5)<<"MEDIA = "<<MEDIA<<endl;
        
        return 0;
    }
