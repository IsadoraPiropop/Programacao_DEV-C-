#include<iostream>
#include<clocale>
#include<cmath>
#include<iomanip>
using namespace std;
    int main () {
    setlocale (LC_ALL,"Portuguese");    
    float x, y;    
    cin>>x;
    cin>>y;
    if (x==0 && y==0) {
     cout<<"Origem";
    } else if (x==0 && y>0) {
     cout<<"Eixo Y";    
    } else if (y==0 && x>0) {
     cout<<"Eixo X";    
    } else if (x<0 && y<0) {
     cout<<"Q3";    
    } else if (x>0 && y>0) {
     cout<<"Q1";    
    } else if (x>0 && y<0) {
     cout<<"Q4";    
    } else if (x<0 && y>0) {
     cout<<"Q2";    
    }
        
        
        return 0;
    }
